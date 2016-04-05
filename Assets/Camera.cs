using UnityEngine;
using System.Collections;
using Photon;

public class camera :  Photon.MonoBehaviour {
	// Use this for initialization
	void Start () {
		if (photonView.isMine) {
			GameObject cam = GameObject.Find ("Main Camera");
			CameraFollow script = cam.GetComponent<CameraFollow> ();
			script.target = this.transform;
		}
	}

}