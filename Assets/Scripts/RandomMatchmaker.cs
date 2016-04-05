using UnityEngine;
using Photon;

public class RandomMatchmaker : Photon.PunBehaviour
{
//	public Camera mainCam;
//	private PhotonView myPhotonView;
//	// Use this for initialization
//	void Start()
//	{
//		PhotonNetwork.ConnectUsingSettings("0.1");
//
//		PhotonNetwork.logLevel = PhotonLogLevel.Full;
//	}

//	public override void OnJoinedLobby()
//	{
//		Debug.Log("JoinRandom");
//		PhotonNetwork.JoinRandomRoom();
//	}
//
//	void OnPhotonRandomJoinFailed()
//	{
//		Debug.Log("Can't join random room!");
//		PhotonNetwork.CreateRoom ("JJ");
//	}
//
//	public override void OnConnectedToMaster(){
//		Debug.Log("Connected to Master!");
//		PhotonNetwork.JoinRandomRoom();
//		GUILayout.Label(PhotonNetwork.room.ToString());
//	}
//
//	void OnJoinedRoom()
//	{
//		GameObject player = PhotonNetwork.Instantiate("BB8", new Vector3(160, 31, 60), Quaternion.identity, 0);
//		BB8MovementScript controller = player.GetComponentInChildren<BB8MovementScript>();
//		controller.isControllable = true;
//		mainCam.GetComponent<SmoothFollow> ().target = player.transform.Find ("Head");
//		myPhotonView = player.GetComponent<PhotonView> ();
//	}
//
//	void OnGUI()
//	{
//		GUILayout.Label(PhotonNetwork.connectionStateDetailed.ToString());
//
//		/*if (PhotonNetwork.connectionStateDetailed == PeerState.Joined)
//		{
//			bool shoutMarco = GameLogic.playerWhoIsIt == PhotonNetwork.player.ID;
//
//			if (shoutMarco && GUILayout.Button("Marco!"))
//			{
//				myPhotonView.RPC("Marco", PhotonTargets.All);
//			}
//			if (!shoutMarco && GUILayout.Button("Polo!"))
//			{
//				myPhotonView.RPC("Polo", PhotonTargets.All);
//			}
//		}*/
//	}
}