using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class SwitchScene2 : MonoBehaviour {
	public Button button;

	void Start() {
		button.onClick.AddListener (() => {
			Click ();
		});
	}

	void Click() {
		SceneManager.LoadScene ("Island");
	}
}
