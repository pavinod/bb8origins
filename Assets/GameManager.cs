using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;


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
    public Dictionary<string, int> HSdict = new Dictionary<string, int>
    {
        {"player1",50},
        {"player2",30}
    };

    void OnJoinedRoom()
	{
        //list.Add ("Player1");
        //list.Add ("Player2");
        //list.Add ("Player3");
        //list.Add ("Player4");
        //joystick.SetActive (true);
		bg.enabled = false;
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
		enabledRenderers[0] = Random.Range(0,2)==0;//Axe
		enabledRenderers[1] = Random.Range(0, 2) == 0; ;//Shield

		object[] objs = new object[1]; // Put our bool data in an object array, to send
		objs[0] = enabledRenderers;

        // Spawn our local player
        //PhotonNetwork.Instantiate(this.playerPrefabName, transform.position, Quaternion.identity, 0, objs);

        var player = PhotonNetwork.Instantiate("BB8", new Vector3(0, 10, 0), Quaternion.identity, 0) as GameObject;
        player.gameObject.tag = "Player" + i.ToString();
        BB8MovementScript controller = player.GetComponentInChildren<BB8MovementScript>();
        controller.isControllable = true;
        mainCam.GetComponent<SmoothFollow>().target = player.transform.Find("Head");
        myPhotonView = player.GetComponent<PhotonView>();

        i++;
    }


	void OnGUI()
	{
		if (PhotonNetwork.room == null) return; //Only display this GUI when inside a room

		if (GUILayout.Button("Leave Room"))
		{
			PhotonNetwork.LeaveRoom();
		}

        if (gametimer.IsItTimeYet) { ShowHighScoreGUI(HSdict); }
    }

	void OnDisconnectedFromPhoton()
	{
		Debug.LogWarning("OnDisconnectedFromPhoton");
	}

    void ShowHighScoreGUI(Dictionary<string, int> HSdict)
    {
        Dictionary<string, int> myDic = HSdict;
        float width1 = 400;
        float height1 = 300;
        float var1 = 200;

        GUILayout.BeginArea(new Rect((Screen.width - width1) / 2, (Screen.height - height1) / 2, width1, height1));
        GUILayout.Label("<size=40>Highscore</size>");
        //padding
        GUILayout.Label("", GUILayout.Width(var1));

        GUILayout.BeginHorizontal();
        GUILayout.Label("<size=30>Player:</size>", GUILayout.Width(var1));
        GUILayout.Label("<size=30>Score:</size>", GUILayout.Width(var1));
        GUILayout.EndHorizontal();



        foreach (KeyValuePair<string, int> entry in myDic)
        {
            // do something with entry.Value or entry.Key
            GUILayout.BeginHorizontal();
            GUILayout.Label(entry.Key, GUILayout.Width(var1));
            GUILayout.Label(entry.Value.ToString(), GUILayout.Width(var1));
            GUILayout.EndHorizontal();
        }


        GUILayout.EndArea();
    }
}
