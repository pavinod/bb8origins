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
	public GameObject light;
    public MatchTimer gametimer;
	public GameObject stormtrooper;
	public GameObject lobby;


    void OnJoinedRoom()
	{
        //list.Add ("Player1");
        //list.Add ("Player2");
        //list.Add ("Player3");
        //list.Add ("Player4");
        //joystick.SetActive (true);
		joystick.SetActive (true);
		lobby.SetActive(false);
		StartGame();
        
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
        int i = 1;
        List<string> list = new List<string>() { "Player1", "Player2", "Player3", "Player4" };
        light.SetActive(true);
		
		Camera.main.farClipPlane = 1000; //Main menu set this to 0.4 for a nicer BG    

		//prepare instantiation data for the viking: Randomly diable the axe and/or shield
		bool[] enabledRenderers = new bool[2];
		enabledRenderers[0] = UnityEngine.Random.Range(0,2)==0;//Axe
		enabledRenderers[1] = UnityEngine.Random.Range(0, 2) == 0; ;//Shield

		object[] objs = new object[1]; // Put our bool data in an object array, to send
		objs[0] = enabledRenderers;

		// instantiate flags
		var cube1 = PhotonNetwork.Instantiate("CubeA", new Vector3(-88, 5, -96), Quaternion.identity, 0) as GameObject;
		myPhotonView = cube1.GetComponent<PhotonView> ();
		var cube2 = PhotonNetwork.Instantiate("CubeB", new Vector3(100, 7, -103), Quaternion.identity, 0) as GameObject;
		myPhotonView = cube2.GetComponent<PhotonView> ();
		var cube3 = PhotonNetwork.Instantiate("CubeC", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject;
		myPhotonView = cube3.GetComponent<PhotonView> ();
		var cube4 = PhotonNetwork.Instantiate("CubeD", new Vector3(-88, 7, 89), Quaternion.identity, 0) as GameObject;
		myPhotonView = cube4.GetComponent<PhotonView> ();

        // Spawn our local player
        //PhotonNetwork.Instantiate(this.playerPrefabName, transform.position, Quaternion.identity, 0, objs);

        var player = PhotonNetwork.Instantiate("BB8", new Vector3(0, 10, 0), Quaternion.identity, 0) as GameObject;
        //try to use this id for player calling
		player.gameObject.tag = "Player" + PhotonNetwork.player.ID.ToString ();
		stormtrooper.GetComponent<StormTrooperControl>().playertag = player.gameObject.tag;
        BB8MovementScript controller = player.GetComponentInChildren<BB8MovementScript>();
        controller.isControllable = true;
        mainCam.GetComponent<SmoothFollow>().target = player.transform.Find("Head");
        myPhotonView = player.GetComponent<PhotonView>();
		stormtrooper.SetActive (true);

        i++;
    }


	void OnGUI()
	{
		if (PhotonNetwork.room == null) return; //Only display this GUI when inside a room

		if (GUILayout.Button("<size="+35+">Quit</size>", GUILayout.Width(300), GUILayout.Height(100)))
		{
			PhotonNetwork.LeaveRoom();
		}

        if (gametimer.IsItTimeYet) { ShowHighScoreGUI(); }
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


        ExitGames.Client.Photon.Hashtable dict = PhotonNetwork.room.customProperties;
        Debug.Log(dict);
        
        //display individual player score
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

        GUILayout.EndArea();
    }
}
