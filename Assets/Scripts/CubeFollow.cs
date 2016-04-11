using UnityEngine;
using System.Collections;

public class CubeFollow : MonoBehaviour {

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
	}
}