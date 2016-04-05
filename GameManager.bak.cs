using UnityEngine.UI;
using UnityEngine;
using System.Collections;
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
		List<string> list = new List<string> () {"Player1", "Player2", "Player3", "Player4"};
		light.SetActive (true);
		
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
		player.gameObject.tag = "Player" + i.ToString ();
		BB8MovementScript controller = player.GetComponentInChildren<BB8MovementScript>();
		controller.isControllable = true;
		mainCam.GetComponent<SmoothFollow> ().target = player.transform.Find ("Head");
		myPhotonView = player.GetComponent<PhotonView> ();

		i++;
	}

	void OnGUI()
	{
		if (PhotonNetwork.room == null) return; //Only display this GUI when inside a room

		if (GUILayout.Button("Leave Room"))
		{
			PhotonNetwork.LeaveRoom();
		}
	}

	void OnDisconnectedFromPhoton()
	{
		Debug.LogWarning("OnDisconnectedFromPhoton");
	}    
}
