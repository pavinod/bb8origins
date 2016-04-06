using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using CnControls;
using UnityEngine.SceneManagement;
using System.Threading;

public class BB8MovementScript : Photon.MonoBehaviour {
	private PhotonView myPhotonView;
	public float speed;
	public float jumpPower;
	public bool isControllable;
	public GameObject player;
	public GameObject flag_a;
	public GameObject flag_b;
	public GameObject flag_c;
	public GameObject flag_d;
	public GameObject cubeA;
	public GameObject cubeB;
	public GameObject cubeC;
	public GameObject cubeD;
	private Rigidbody rb;
	private Transform m_Cam;
	private Vector3 m_CamForward;
	private Vector3 m_Move;
	private bool jumpEnb;

	void Start ()
	{
		m_Cam = Camera.main.transform;
		rb = GetComponent<Rigidbody>();
	}

	void OnCollisionEnter(Collision collision) {
		if (collision.gameObject.CompareTag ("Terrain")) {
			jumpEnb = true;
		}
	}

	void Update() {
		if (CnInputManager.GetButtonDown ("Jump") && jumpEnb && isControllable) {
			rb.AddForce (new Vector3 (0, jumpPower, 0));
			jumpEnb = false;
		}
	}

	void FixedUpdate ()
	{
		float moveHorizontal = CnInputManager.GetAxis ("Horizontal");
		float moveVertical = CnInputManager.GetAxis ("Vertical");

		m_CamForward = Vector3.Scale(m_Cam.forward, new Vector3(1, 0, 1)).normalized;

		Vector3 movement = moveVertical*m_CamForward + moveHorizontal*m_Cam.right;

		if (isControllable) {
			rb.AddForce (movement * speed);
		}
	}

	IEnumerator OnTriggerEnter(Collider other) 
	{
		/*
		if (other.gameObject.CompareTag ("Island Goal"))
		{
			other.gameObject.SetActive (false);
			SceneManager.LoadScene ("Desert");
		}
		if (other.gameObject.CompareTag ("Desert Goal"))
		{
			other.gameObject.SetActive (false);
			SceneManager.LoadScene ("Island");
		}
		*/
		if(other.gameObject.CompareTag("CubeA") == true){
			if (player.tag == "Player1") {
				if (flag_c.active == true) {
					var cube3 = PhotonNetwork.Instantiate("CubeC", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject;
					myPhotonView = cube3.GetComponent<PhotonView> ();
					//cubeC.SetActive (true);
					//GameObject.FindWithTag("CubeC").SetActive(true);

					Debug.Log (GameObject.FindWithTag("CubeC"));
					flag_c.SetActive (false);

				} else {
					other.gameObject.SetActive (false);
					yield return new WaitForSeconds (5);
					//Thread.Sleep (5000);
					other.gameObject.SetActive (true);
				}
			} else if (player.tag == "Player2") {
				flag_c.SetActive (true);
				other.gameObject.SetActive (false);
			}
		}
		if (other.gameObject.CompareTag ("CubeB")) {
			other.gameObject.SetActive (false);
			flag_b.SetActive (true);
			yield return new WaitForSeconds (5);
			//Thread.Sleep (5000);
			other.gameObject.SetActive (true);
		}
		if (other.gameObject.CompareTag ("CubeC")) {
			if (player.tag == "Player2") {
				if (flag_a.active == true) {
					flag_a.SetActive (false);
				} else {
					other.gameObject.SetActive (false);
					yield return new WaitForSeconds (5);
					//Thread.Sleep (5000);
					other.gameObject.SetActive (true);
				}
			} 
			if (player.tag == "Player1") {
				flag_c.SetActive (true);
				other.gameObject.SetActive (false);
			}

		}
		if (other.gameObject.CompareTag ("CubeD")) {
			other.gameObject.SetActive (false);
			yield return new WaitForSeconds (5);
			//Thread.Sleep (5000);
			other.gameObject.SetActive (true);
		}
	}
}