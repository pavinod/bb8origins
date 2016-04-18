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
	public Image bg;
    public MatchTimer gametimer;
	public GameObject lobby;
	private PlayMusic playMusic;
    public MatchTimer gamestarted;
    int[] score;

    private bool start = true;

    void OnJoinedRoom()
	{
		lobby.SetActive(false);
		StartGame();        
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

		Dictionary<string, List<Vector3>> dict = new Dictionary<string, List<Vector3>>();
		Dictionary<string, Color32> colorRef = new Dictionary<string, Color32> ();
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
		mainCam.GetComponent<SmoothFollow>().target = player.transform.Find("Head");
        myPhotonView = player.GetComponent<PhotonView>();

		GameObject[] playersInGame = GameObject.FindGameObjectsWithTag("TBA");
		foreach (GameObject obj in playersInGame) {
			Debug.Log("There is someone named: " + obj.GetComponent<PhotonView>().owner.ID + " in the game!");
		}
		score = new int[4] { 0, 0, 0, 0 };
    }


	void OnGUI()
	{
		
		if (PhotonNetwork.room == null) return; //Only display this GUI when inside a room

		if (PhotonNetwork.room.playerCount != 1) {
			GUILayout.BeginArea (new Rect ((Screen.width - 400) / 2, (Screen.height - 300) / 2, 400, 300));
			GUILayout.Label ("<size=30>Waiting for " + (4 - (PhotonNetwork.room.playerCount)) + " more players</size>", GUILayout.Width (500));
			Ready();
			GUILayout.EndArea ();
			joystick.SetActive (false);

		} else {
            if (gamestarted.IsItTimeYet)
            {
                if (start)
                {
                    GUILayout.Label("<size=30>Ready...</size>", GUILayout.Width(500));
                    //yield WaitForSeconds(2);
                    GUILayout.Label("<size=30>Go!!</size>", GUILayout.Width(500));
                    start = false;
                }
                joystick.SetActive(true);

                GameObject[] playersInGame = GameObject.FindGameObjectsWithTag("TBA");
                foreach (GameObject obj in playersInGame)
                {
                    obj.tag = "Player" + obj.GetComponent<PhotonView>().owner.ID;
                }
                GameObject[] stInGame = GameObject.FindGameObjectsWithTag("stormtrooper");
                foreach (GameObject st in stInGame)
                {
                    st.tag = "Stormtrooper" + st.GetComponent<PhotonView>().owner.ID;
                }

            }
            else
            {
                GUILayout.BeginArea(new Rect((Screen.width - 400) / 2, (Screen.height - 300) / 2, 400, 300));
                GUILayout.Label("<size=30>Game starting in "+ gamestarted.SecondsUntilItsTime+"</size>", GUILayout.Width(500));
                GUILayout.EndArea();
            }
		}

		if (GUILayout.Button("<size="+35+">Quit</size>", GUILayout.Width(300), GUILayout.Height(100)))
		{
			PhotonNetwork.LeaveRoom();
		}

//        if (gametimer.IsItTimeYet) { ShowHighScoreGUI(); }
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
        Debug.Log(score);
        
        //display individual player score
        for (int i = 0; i< score.Length; i++){
            GUILayout.BeginHorizontal();
            GUILayout.Label("Player " + i, GUILayout.Width(var1));
            GUILayout.Label(score[i].ToString(), GUILayout.Width(var1));
            GUILayout.EndHorizontal();
        }
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

    [PunRPC]
    void Increment(int points, string playerID)
    {
		Debug.Log ("incremented");
        score[(int)Char.GetNumericValue(playerID[playerID.Length - 1])] += points;
		ScoreManager.score1 = score [0];
		ScoreManager.score2 = score [1];
		ScoreManager.score3 = score [2];
		ScoreManager.score4 = score [3];
	}
}
