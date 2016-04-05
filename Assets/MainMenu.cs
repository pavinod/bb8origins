using UnityEngine.UI;
using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour
{
	public GameObject joystick;
	public Image bg;
	//public Font font;
	public float var1 = 500;
	GUIStyle font;
	void Awake()
	{
		//PhotonNetwork.logLevel = NetworkLogLevel.Full;

		//Connect to the main photon server. This is the only IP and port we ever need to set(!)
		if (!PhotonNetwork.connected)
			PhotonNetwork.ConnectUsingSettings("v1.0"); // version of the game/demo. used to separate older clients from newer ones (e.g. if incompatible)

		//Load name from PlayerPrefs
		PhotonNetwork.playerName = PlayerPrefs.GetString("playerName", "BB8_" + Random.Range(1, 9999));

		//Set camera clipping for nicer "main menu" background
		Camera.main.farClipPlane = Camera.main.nearClipPlane + 0.1f;
		joystick.SetActive (false);
		bg.enabled = true;


	}

	private string roomName = "Mars";
	private Vector2 scrollPos = Vector2.zero;

	void OnGUI()
	{
		//GUI.skin.label.font = GUI.skin.button.font = GUI.skin.box.font = font;
		//GUI.skin.label.fontSize = GUI.skin.box.fontSize = GUI.skin.button.fontSize = fontSize;
		font = new GUIStyle();
		font.fontSize = 26;
		float width1 = 700;
		float height1 = 500;
		//	float var1 = 500;
		int fontSize = 26;
		//joystick.SetActive (false);
		if (!PhotonNetwork.connected)
		{
			ShowConnectingGUI();
			return;   //Wait for a connection
		}



		if (PhotonNetwork.room != null)
			return; //Only when we're not in a Room


		GUILayout.BeginArea(new Rect((Screen.width - width1) / 2, (Screen.height - height1) / 2, width1, height1));

		GUILayout.Label("<size=40>Main Menu</size>");

		//Player name
		GUILayout.BeginHorizontal();
		GUILayout.Label("<size=35>Player name:</size>", GUILayout.Width(var1));
		PhotonNetwork.playerName = GUILayout.TextField(PhotonNetwork.playerName);
		if (GUI.changed)//Save name
			PlayerPrefs.SetString("playerName", PhotonNetwork.playerName);
		GUILayout.EndHorizontal();

		GUILayout.Space(15);


		//Join room by title
		GUILayout.BeginHorizontal();
		GUILayout.Label("<size=35>JOIN ROOM:</size>", GUILayout.Width(var1)	);
		roomName = GUILayout.TextField(roomName);
		if (GUILayout.Button("GO", GUILayout.Width(80), GUILayout.Height(35)))
		{
			PhotonNetwork.JoinRoom(roomName);
		}
		GUILayout.EndHorizontal();

		//Create a room (fails if exist!)
		GUILayout.BeginHorizontal();
		GUILayout.Label("<size=35>CREATE ROOM:</size>", GUILayout.Width(var1));
		roomName = GUILayout.TextField(roomName);
		if (GUILayout.Button("GO", GUILayout.Width(80), GUILayout.Height(35)))
		{
			// using null as TypedLobby parameter will also use the default lobby
			PhotonNetwork.CreateRoom(roomName, new RoomOptions() { maxPlayers = 10 }, TypedLobby.Default);
		}
		GUILayout.EndHorizontal();

		//Join random room
		GUILayout.BeginHorizontal();
		GUILayout.Label("<size=35>JOIN RANDOM ROOM:</size>", GUILayout.Width(var1));
		if (PhotonNetwork.GetRoomList().Length == 0)
		{
			GUILayout.Label("<size=35>..no games available...</size>", GUILayout.Width(var1));
		}
		else
		{
			if (GUILayout.Button("GO"))
			{
				PhotonNetwork.JoinRandomRoom();
			}
		}
		GUILayout.EndHorizontal();

		GUILayout.Space(30);
		GUILayout.Label("<size=35>ROOM LISTING:</size>", GUILayout.Width(var1));
		if (PhotonNetwork.GetRoomList().Length == 0)
		{
			GUILayout.Label("<size=35>..no games available..</size>", GUILayout.Width(var1));
		}
		else
		{
			//Room listing: simply call GetRoomList: no need to fetch/poll whatever!
			scrollPos = GUILayout.BeginScrollView(scrollPos);
			foreach (RoomInfo game in PhotonNetwork.GetRoomList())
			{
				GUILayout.BeginHorizontal();
				GUILayout.Label(game.name + " " + game.playerCount + "/" + game.maxPlayers, font);
				if (GUILayout.Button("JOIN", GUILayout.Width(80), GUILayout.Height(35)))
				{
					PhotonNetwork.JoinRoom(game.name);
				}
				GUILayout.EndHorizontal();
			}
			GUILayout.EndScrollView();
		}

		GUILayout.EndArea();



	}


	void ShowConnectingGUI()
	{
		GUILayout.BeginArea(new Rect((Screen.width - 400) / 2, (Screen.height - 300) / 2, 400, 300));

						GUILayout.Label("<size=35>Connecting to Photon server.</size>", GUILayout.Width(var1));
		GUILayout.EndArea();
	}

	public void OnConnectedToMaster()
	{
		// this method gets called by PUN, if "Auto Join Lobby" is off.
		// this demo needs to join the lobby, to show available rooms!

		PhotonNetwork.JoinLobby();  // this joins the "default" lobby
	}
}
