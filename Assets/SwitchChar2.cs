using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityStandardAssets.Characters.ThirdPerson;

public class SwitchChar2 : MonoBehaviour {
	public GameObject C3PO;
	public GameObject BB8;
	public Transform CameraC3P0;
	public Transform CameraBB8;
	public Button button;
	public GameObject cam;

	private int tracker = 0;
	private ThirdPersonUserControl C3POscript;
	private BB8MovementScript BB8script;

	void Start() {
		button.onClick.AddListener (() => {
			Click ();
		});

		C3POscript = C3PO.GetComponent<ThirdPersonUserControl> ();
		BB8script = BB8.GetComponent<BB8MovementScript> ();
	}

	void Click() {
		SmoothFollow script = cam.GetComponent<SmoothFollow> ();
		if (tracker == 0) {
			tracker = 1;
			C3POscript.enabled = false;
			BB8script.enabled = true;
			script.target = CameraBB8;
		} else {
			tracker = 0;
			C3POscript.enabled = true;
			BB8script.enabled = false;
			script.target = CameraC3P0;
		}
	}
}
