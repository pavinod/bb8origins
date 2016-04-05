using UnityEngine;

public class AudioRPC : MonoBehaviour {

	[PunRPC]
	void PlayerJoined()
	{
		Debug.Log("Player Joined!");
	}
}