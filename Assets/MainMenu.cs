using UnityEngine.UI;
using UnityEngine;
using System.Collections;
using ExitGames.Client.Photon;

public class MainMenu : MonoBehaviour
{
	public GameObject joystick;
	public Image bg;
	//public Font font;
	public float var1 = 500;
	public Button create;
	public Button joinRoom;
	public Button random;
	public Button quit;
	public InputField playername;
	public InputField createroom;
	public GameObject scroller;
	public GameObject rooms;
    private ExitGames.Client.Photon.Hashtable roomProps = new ExitGames.Client.Photon.Hashtable() { {"p1", 3 } };
    string[] roomPropsInLobby = {"p1", "p2", "p3", "p4"};
    private TypedLobby defaultLobby = new TypedLobby("dexterlobby", LobbyType.Default);
	public Text connect;
	bool refreshed;

	void Awake()
	{
		//PhotonNetwork.logLevel = NetworkLogLevel.Full;

		//Connect to the main photon server. This is the only IP and port we ever need to set(!)
		if (!PhotonNetwork.connected)
			PhotonNetwork.ConnectUsingSettings("v1.0"); // version of the game/demo. used to separate older clients from newer ones (e.g. if incompatible)

		//Load name from PlayerPrefs
		PhotonNetwork.playerName = PlayerPrefs.GetString("playerName", "BB8_" + Random.Range(1, 9999));

		//Set camera clipping for nicer "main menu" background
//		Camera.main.farClipPlane = Camera.main.nearClipPlane + 0.1f;
		joystick.SetActive (false);
		bg.enabled = true;


	}

	private string roomName = "Mars";
	private Vector2 scrollPos = Vector2.zero;

	void OnGUI()
	{
		float width1 = 700;
		float height1 = 500;
		int fontSize = 26;


		if (!PhotonNetwork.connected) {			
			connect.text = "Connecting..";
			return;   //Wait for a connection
		} else {
			connect.text = "";
		}

		if (PhotonNetwork.GetRoomList().Length == 0)
		{
			random.GetComponentInChildren<Text>().text="No rooms available";
			random.enabled = false;
		}
		else
		{	
			if (!refreshed) scroller.GetComponent<ScrollableList> ().refreshRooms ();
			refreshed = true;
			random.enabled = true;			
			random.GetComponentInChildren<Text>().text="<color=white>Random Room!</color>";
		}

		if (PhotonNetwork.room != null)
			return; //Only when we're not in a Room

		create.onClick.AddListener(()=> {

			bool gotRoom=false;
			PhotonNetwork.playerName=playername.text;
			//if Room already exists enter room
			foreach (RoomInfo game in PhotonNetwork.GetRoomList())
			{
				if(game.name.Equals(createroom.text)){
					PhotonNetwork.JoinRoom(game.name);
					gotRoom=true;
					Debug.Log(game.name + " " + game.playerCount + "/" + game.maxPlayers);
					break;
				}
			}
			if(!gotRoom){
				//Debug.Log("Room not present");
//                RoomOptions roomOptions = new RoomOptions() { isVisible = true, maxPlayers = 4, customRoomProperties = roomProps, customRoomPropertiesForLobby = roomPropsInLobby };
//                PhotonNetwork.CreateRoom(createroom.text, roomOptions, defaultLobby);
				PhotonNetwork.CreateRoom(createroom.text, new RoomOptions() { maxPlayers = 4 }, TypedLobby.Default);

			}

		});

		random.onClick.AddListener(()=> {
			//Debug.Log("random");
			PhotonNetwork.playerName=playername.text;
			PhotonNetwork.JoinRandomRoom();

		});

	}

	public void OnConnectedToMaster()
	{
		// this method gets called by PUN, if "Auto Join Lobby" is off.
		// this demo needs to join the lobby, to show available rooms!

		PhotonNetwork.JoinLobby();  // this joins the "default" lobby
	}
}
