using UnityEngine;
using System.Collections;
using ExitGames.Client.Photon;

public class LastPlayerSighting : Photon.MonoBehaviour {
	public Vector3 position = new Vector3 (0f, 0f, 0f);
	public Vector3 resetPosition = new Vector3(0f, 0f, 0f);
	public float lightHighIntensity = 0.25f;
	public float lightLowIntensity = 0f;

	//private AlarmLight alarm;
	private Light mainLight;
	private AudioSource sirenAudio;
	//private AudioSource[] sirens;

	void Awake(){
		//mainLight = GameObject.FindGameObjectWithTag (Tags.mainLight).light;
		//panicAudio = transform.Find ("secondaryMusic").audio;
		//GameObject[] sirenGameObjects = GameObject.FindGameObjectsWithTag (Tags.siren);
		//sirens = new AudioSource[sirenGameObjects.Length];
		//for (int i = 0; i < sirens.Length; i++) {
		//	sirens [i] = sirenGameObjects [i].audio;
		//}

	}

	void Update(){
		
	}

	public void PlaySiren(){
		sirenAudio = (AudioSource)gameObject.AddComponent<AudioSource>();
		AudioClip myClip = (AudioClip)Resources.Load ("siren");
		sirenAudio.clip = myClip;
		sirenAudio.loop = true;
		sirenAudio.Play ();

	}

	public void StopSiren(){
		sirenAudio.Stop ();
	}


}
