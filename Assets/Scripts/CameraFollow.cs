using UnityEngine;
using System.Collections;

public class CameraFollow : MonoBehaviour {
	public Transform target;
	public float smoothing = 5f;
	public float rotateSpeed = 5;

	Vector3 offset;

	void Start()
	{
		offset = transform.position - target.position;
//		offset = transform.position - target.transform.position;
	}

	void FixedUpdate()
	{
		Vector3 targetCamPos = target.position + offset;
		transform.position = Vector3.Lerp (transform.position, targetCamPos, smoothing * Time.deltaTime);
	}
}
