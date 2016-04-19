using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using ExitGames.Client.Photon;
using System;

public class GameManager : Photon.MonoBehaviour {

	// this is a object name (must be in any Resources folder) of the prefab to spawn as player avatar.
	// read the documentation for info how to spawn dynamically loaded game objects at runtime (not using Resources folders)
	//public string playerPrefabName = "Charprefab";
	//public bool gui;
	public Camera mainCam;
	private PhotonView myPhotonView;
	public GameObject joystick;
	public Button quit;
	public MatchTimer gametimer;
	public GameObject lobby;
	private PlayMusic playMusic;
	public MatchTimer gamestarted;
	public GameObject gameUI;
	public Text dc;

	public static bool ended;

	Dictionary<string, List<Vector3>> dict = new Dictionary<string, List<Vector3>>();
	Dictionary<string, Color32> colorRef = new Dictionary<string, Color32> ();

	private bool start = true;

	void OnJoinedRoom()
	{
		gameUI.SetActive (true);
		dc.enabled = false;
		lobby.SetActive(false);
		StartGame();
	}

	void Update(){
		//Debug.Log ("Current players " + PhotonNetwork.room.playerCount);
		Debug.Log ("Start " + start);
		if (!start&& PhotonNetwork.inRoom) {
			checkPlayersNum ();
		}
	}

	void Awake(){
		//Get a reference to PlayMusic attached to UI object
		playMusic = GetComponent<PlayMusic> ();
	}

	IEnumerator OnLeftRoom()
	{
		//Easy way to reset the level: Otherwise we'd manually reset the camera

		//Wait untill Photon is properly disconnected (empty room, and connected back to main server)
		while(PhotonNetwork.room!=null || PhotonNetwork.connected==false)
			yield return 0;

		Application.LoadLevel(Application.loadedLevel);

	}


	void StartGame()
	{	
		playMusic.PlayLevelMusic ();

		//{cube's position, bb8's position, st's position}
		List<Vector3> p1 = new List<Vector3> (){new Vector3(-29, 6, -29), new Vector3(-44.7f, 6.3f, -55.7f)};
		List<Vector3> p2 = new List<Vector3> (){new Vector3(-20.92f, 6, 15.4f), new Vector3(-41, 13, 50)};
		List<Vector3> p3 = new List<Vector3> (){new Vector3(25, 6, 15), new Vector3(46, 9, 40)};
		List<Vector3> p4 = new List<Vector3> (){new Vector3(21, 6, -30), new Vector3(48, 9.5f, -72)};

		colorRef.Add ("1", new Color32(0, 0, 255, 255));
		colorRef.Add ("2", new Color32(255, 255, 0, 255));
		colorRef.Add ("3", new Color32(255, 0, 0, 255));
		colorRef.Add ("4", new Color32(0, 255, 0, 255));
		dict.Add ("1", p1);
		dict.Add ("2", p2);
		dict.Add ("3", p3);
		dict.Add ("4", p4);
		int i = 1;
		List<string> list = new List<string>() { "Player1", "Player2", "Player3", "Player4" };

		Camera.main.farClipPlane = 1000; //Main menu set this to 0.4 for a nicer BG    

		var player = PhotonNetwork.Instantiate("BB8", dict[PhotonNetwork.player.ID.ToString()][0], Quaternion.identity, 0) as GameObject;
		var st = PhotonNetwork.Instantiate("StormtrooperAI", dict[PhotonNetwork.player.ID.ToString()][1], Quaternion.identity, 0) as GameObject;
		//try to use this id for player calling
		player.gameObject.tag = "Player" + PhotonNetwork.player.ID.ToString ();
		st.gameObject.tag = "Stormtrooper" + PhotonNetwork.player.ID.ToString ();

		player.gameObject.transform.Find("Head").GetComponent<MeshRenderer>().materials[3].color = colorRef[PhotonNetwork.player.ID.ToString()];
		player.gameObject.transform.Find ("Head").GetComponent<MeshRenderer> ().materials [4].color = colorRef [PhotonNetwork.player.ID.ToString ()];

		BB8MovementScript controller = player.GetComponentInChildren<BB8MovementScript>();
		controller.isControllable = true;
		mainCam.GetComponent<AutoRotate> ().enabled = false;
		mainCam.GetComponent<SmoothFollow>().target = player.transform.Find("Head");
		myPhotonView = player.GetComponent<PhotonView>();
	}

	void OnGUI()
	{

		if (PhotonNetwork.room == null) return; //Only display this GUI when inside a room

		if (PhotonNetwork.room.playerCount != 4) {
			ScoreManager.waitingtext = PhotonNetwork.room.playerCount + "/4 ready";
			joystick.SetActive (false);
		} else {

			gametimer.enabled = true;
			ScoreManager.waiting = false;

			if (gamestarted.IsItTimeYet)
			{
				if (start)
				{
					start = false;

					GameObject[] playersInGame = GameObject.FindGameObjectsWithTag("TBA");
					foreach (GameObject obj in playersInGame)
					{
						int id = obj.GetComponent<PhotonView> ().owner.ID;
						obj.transform.Find("Head").GetComponent<MeshRenderer>().materials[3].color = colorRef[""+id];
						obj.transform.Find("Head").GetComponent<MeshRenderer> ().materials[4].color = colorRef[""+id];
						obj.tag = "Player" + id;
					}
					GameObject[] stInGame = GameObject.FindGameObjectsWithTag("stormtrooper");
					foreach (GameObject st in stInGame)
					{
						st.tag = "Stormtrooper" + st.GetComponent<PhotonView>().owner.ID;
					}
				}
				joystick.SetActive(true);
				ScoreManager.start = true;

			}
			else
			{
				ScoreManager.count = Convert.ToInt32 (gamestarted.SecondsUntilItsTime);
			}
		}

		quit.onClick.AddListener(()=> {
			gameUI.SetActive(false);
			PhotonNetwork.LeaveRoom();
		});

		if (gametimer.IsItTimeYet || ended) { 
			StartCoroutine(ShowMessage("Oops you got DCed...", 2)); 
		}
	}

	IEnumerator Ready() {
		print(Time.time);
		if (start) {
			GUILayout.Label ("<size=30>Ready...</size>", GUILayout.Width (500));
			yield return new WaitForSeconds(2);
			GUILayout.Label ("<size=30>Go!!</size>", GUILayout.Width (500));
			start = false;
		}
		print(Time.time);
	}

	void GameOverAndReload()
	{
		GUILayout.BeginHorizontal();
		GUILayout.Label("<size=30>Game Over!</size>", GUILayout.Width(200));
		GUILayout.EndHorizontal();

		if(GUI.Button(new Rect(10, 10, 50, 50), "Back to main menu"))
		{
			Application.LoadLevel(Application.loadedLevel);
		}
	}
	void OnDisconnectedFromPhoton()
	{
		Debug.LogWarning("OnDisconnectedFromPhoton");
	}

	void ShowHighScoreGUI()
	{
		float width1 = 400;
		float height1 = 300;
		float var1 = 200;

		//header of highscore
		GUILayout.BeginArea(new Rect((Screen.width - width1) / 2, (Screen.height - height1) / 2, width1, height1));
		GUILayout.Label("<size=40>Highscore</size>");
		//padding
		GUILayout.Label("", GUILayout.Width(var1));

		GUILayout.BeginHorizontal();
		GUILayout.Label("<size=30>Player:</size>", GUILayout.Width(var1));
		GUILayout.Label("<size=30>Score:</size>", GUILayout.Width(var1));
		GUILayout.EndHorizontal();


		//ExitGames.Client.Photon.Hashtable dict = PhotonNetwork.room.customProperties;
		//        Debug.Log(score);

		//display individual player score
		//        for (int i = 0; i< score.Length; i++){
		//            GUILayout.BeginHorizontal();
		//            GUILayout.Label("Player " + i, GUILayout.Width(var1));
		//            GUILayout.Label(score[i].ToString(), GUILayout.Width(var1));
		//            GUILayout.EndHorizontal();
		//        }
		/*
            foreach (DictionaryEntry scoreentry in dict)
            {
			if (!(scoreentry.Key.ToString().Equals("st")) && !(scoreentry.Key.ToString().Equals("p1")))
            {
                GUILayout.BeginHorizontal();
                GUILayout.Label(scoreentry.Key.ToString(), GUILayout.Width(var1));
                GUILayout.Label(scoreentry.Value.ToString(), GUILayout.Width(var1));
                GUILayout.EndHorizontal();
            }
          }
          */

		GUILayout.EndArea();
	}

	void backToFirst(){
		Application.LoadLevel (0);
	}

	void checkPlayersNum()
	{
		if (PhotonNetwork.room.playerCount< 4) {
			//kickout
			Debug.Log ("Close room NOW!!!");
			//			dc.text= "You got DCed";
			//			//start timer
			//			dc.enabled=true;
			//end timer 
			StartCoroutine(ShowMessage("Oops you got DCed...",2));
		}
	}

	IEnumerator ShowMessage(string message, float delay){
		//set text
		dc.text= message;
		dc.enabled=true;
		yield return new WaitForSeconds (delay);
		PhotonNetwork.LeaveRoom ();
		dc.enabled = false;		
		//hide text

	}

}
