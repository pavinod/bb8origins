﻿using UnityEngine;
using System.Collections;

public class StormTrooperControl : MonoBehaviour
{
	Transform player;               // Reference to the player's position.
	GameObject playerGameObject;    // Refernce to a BB8
	NavMeshAgent nav;               // Reference to the nav mesh agent.
	public Animator anim;
	bool activate;
	private string BB8tag = "";
	bool isWalking;
	bool isWalkingRest;

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
			nav.SetDestination (player.position);
		} else {
			nav.enabled = false;
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
}