using UnityEngine;
using System.Collections;
using Photon;

public class StormTrooperControl : Photon.MonoBehaviour
{
	Transform player;               // Reference to the player's position.
	GameObject playerGameObject;    // Refernce to a BB8
	NavMeshAgent nav;               // Reference to the nav mesh agent.
	public Animator anim;
	bool activate;
	private string BB8tag = "";
	bool isWalking;
	bool isWalkingRest;
	Vector3 destination;

	void Awake ()
	{
		// Set up the references.
		//playerGameObject = GameObject.FindGameObjectWithTag ("Player1");
		//player = playerGameObject.transform;
		nav = GetComponent <NavMeshAgent> ();
		anim = GetComponent<Animator> ();

		activate = false;
		anim.SetBool("isWalking", false);
	}

	public void Wakeup(string targetName)
	{
		// once a BB8 collide with cube, this function is called, and stormtrooper wakes up
		Debug.Log ("stormstrooper wakes up");
		playerGameObject = GameObject.FindGameObjectWithTag (targetName);
		player = playerGameObject.transform;
		anim.SetBool ("isWalking", true);
		activate = true;
		BB8tag = targetName;
	}

	public void Sleep()
	{
		activate = false;
		nav.enabled = false;
	}

	void Update ()
	{
		if (photonView.isMine) {
			float speed;
			speed = Vector3.Project (nav.desiredVelocity, transform.forward).magnitude;

			if (speed > 0) {
				isWalking = true;
			} else {
				isWalking = false;
			}

			anim.SetBool ("isWalking", isWalking);

			if (activate) {
				nav.enabled = true;
				destination = player.position;
				nav.SetDestination (player.position);
			} else {
				nav.enabled = false;
			}

		} else {

			anim.SetBool ("isWalking", isWalkingRest);

			if (activate) {
				nav.enabled = true;
				nav.SetDestination (destination);
			} else {
				nav.enabled = false;
			}

		}

	} 

	void OnCollisionEnter(Collision collision) {
		Debug.Log ("bump");
		anim.SetTrigger ("Collide");
		// check if the collision is indeed from the target BB8
		if (collision.gameObject.tag == BB8tag) {
			Debug.Log ("stormtrooper catches BB8!");
			activate = false;
			nav.enabled = false;
			//TODO: call the BB8 function to give up the cobe
		}
	}

	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		if (stream.isWriting)
		{
			// We own this player: send the others our data
			stream.SendNext(destination);
			stream.SendNext(activate);
			stream.SendNext(isWalking);
		}
		else
		{
			// Network player, receive data
			this.destination = (Vector3)stream.ReceiveNext();
			this.activate = (bool)stream.ReceiveNext();
			this.isWalkingRest = (bool)stream.ReceiveNext ();
		}
	}
}