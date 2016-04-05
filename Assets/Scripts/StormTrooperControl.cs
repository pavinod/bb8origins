using UnityEngine;
using System.Collections;

public class StormTrooperControl : MonoBehaviour
{
	Transform player;               // Reference to the player's position.
	GameObject playerGameObject;
	NavMeshAgent nav;               // Reference to the nav mesh agent.
	private Animator anim;
	private 

	void Awake ()
	{
		// Set up the references.
		playerGameObject = GameObject.FindGameObjectWithTag ("BB8");
		player = playerGameObject.transform;
		nav = GetComponent <NavMeshAgent> ();
		anim = GetComponent<Animator> ();
	}


	void Update ()
	{
		
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
		}
	} 

	void onCollisionEnter(Collision collision) {
		anim.SetTrigger ("Collide");
	}
}