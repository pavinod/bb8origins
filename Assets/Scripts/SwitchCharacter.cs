using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SwitchCharacter : MonoBehaviour {

	public GameObject C3PO;
	public GameObject BB8;
	public Transform CameraC3P0;
	public Transform CameraBB8;
	public Button button;
	public GameObject cam;

	private int tracker = 0;

	void Start() {
		button.onClick.AddListener (() => {
			Click ();
		});
	}

	void Click() {
		SmoothFollow script = cam.GetComponent<SmoothFollow> ();
		if (tracker == 0) {
			tracker = 1;
			C3PO.SetActive (false);
			BB8.SetActive (true);
			script.target = CameraBB8;
		} else {
			tracker = 0;
			C3PO.SetActive (true);
			BB8.SetActive (false);
			script.target = CameraC3P0;
		}
	}
}
