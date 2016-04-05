using UnityEngine;
using System.Collections;

public class InstructionFlyIn : MonoBehaviour {
	private Animator animator;

	void Start(){
		animator = GetComponent<Animator> ();
		animator.SetBool ("click", false);
	}

	public void flyIn(int x){
		if (x == 0) {
			animator.SetBool ("click", true);
		}
	}

	public void flyOut(int x){
		if (x == 1) {
			animator.SetBool ("click", false);
		}
	}
}
