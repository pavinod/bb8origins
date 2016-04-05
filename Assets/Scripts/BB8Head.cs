using UnityEngine;
using System.Collections;

public class BB8Head : MonoBehaviour {

	public GameObject player;

	private Vector3 offset;
	private Rigidbody rb;

	void Start ()
	{
		offset = transform.position - player.transform.position;
		rb = player.GetComponent<Rigidbody> ();

	}

	void LateUpdate ()
	{
		transform.position = player.transform.position + offset;

		Vector3 movement = new Vector3 (rb.velocity.x, 270f, rb.velocity.z);
		transform.rotation = Quaternion.LookRotation (movement);
	}
}