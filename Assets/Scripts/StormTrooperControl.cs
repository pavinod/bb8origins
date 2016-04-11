using UnityEngine;
using System.Collections;

public class StormTrooperControl : MonoBehaviour
{
	Transform player;               // Reference to the player's position.
	GameObject playerGameObject;
	NavMeshAgent nav;               // Reference to the nav mesh agent.
	public Animator anim;
	private bool activate; 

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
	}

	void Update ()
	{
		/*
		float speed;
		speed = Vector3.Project (nav.desiredVelocity, transform.forward).magnitude;

		if (speed > 0) {
			anim.SetBool ("isWalking", true);
		} else {
			anim.SetBool ("isWalking", false);
		}

		if(true)
		{
			nav.SetDestination (player.position);
		}
		else
		{
			nav.enabled = false;
		}*/

		if (activate) {
			nav.SetDestination (player.position);
		} else {
			nav.enabled = false;
		}

	} 

	void onCollisionEnter(Collision collision) {
		Debug.Log ("stormtrooper catches BB8!");
		anim.SetTrigger ("Collide");
	}
}