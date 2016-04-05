using UnityEngine;
using System.Collections;

public class Trigger : MonoBehaviour {
	private AudioSource sirenAudio;

	void Start(){
		sirenAudio = (AudioSource)gameObject.AddComponent<AudioSource>();
		AudioClip myClip = (AudioClip)Resources.Load<AudioClip> ("siren");
		sirenAudio.clip = myClip;
		sirenAudio.volume = 1;
		sirenAudio.loop = true;
	}

	void OnTriggerEnter(Collider other)
	{
		//Debug.Log ("Object Entered the trigger");
		PlaySiren ();
	}

	void OnTriggerStay(Collider other)
	{
		//Debug.Log ("Object is within trigger");
	}

	void OnTriggerExit(Collider other)
	{
		//Debug.Log ("Object Exited the trigger");
		StopSiren ();
	}

	public void PlaySiren(){
		sirenAudio.Play ();
	}

	public void StopSiren(){
		sirenAudio.Stop ();
	}

}
