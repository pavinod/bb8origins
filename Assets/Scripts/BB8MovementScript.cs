using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using CnControls;
using UnityEngine.SceneManagement;
using System.Threading;

public class BB8MovementScript : Photon.MonoBehaviour
{
    private PhotonView myPhotonView;
    public float speed;
    public float jumpPower;
    public bool isControllable;

    public GameObject player;
    public GameObject cube_a;
    public GameObject cube_b;
    public GameObject cube_c;
    public GameObject cube_d;
	public GameObject cube1;
	public GameObject cube2;
	public GameObject cube3;
	public GameObject cube4;
    private Rigidbody rb;
    private Transform m_Cam;
    private Vector3 m_CamForward;
    private Vector3 m_Move;
    private bool jumpEnb;
	public HighScoreLogic hsl;
	public StormTrooperControl stc;
	public AudioSource source;

    void Start()
    {
        m_Cam = Camera.main.transform;
        rb = GetComponent<Rigidbody>();
		cube1 = GameObject.FindGameObjectWithTag ("Cube1");
		cube2 = GameObject.FindGameObjectWithTag ("Cube2");
		cube3 = GameObject.FindGameObjectWithTag ("Cube3");
		cube4 = GameObject.FindGameObjectWithTag ("Cube4");
		myPhotonView = this.GetComponent<PhotonView> ();
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Terrain"))
        {
            jumpEnb = true;
			Debug.Log ("on terrain");
        }
		if (collision.gameObject.CompareTag("Water"))
		{
			Debug.Log ("on water");

		}
    }

    void Update()
    {
        if (CnInputManager.GetButtonDown("Jump") && jumpEnb && isControllable)
        {
            rb.AddForce(new Vector3(0, jumpPower, 0));
            jumpEnb = false;
        }
        //Debug.Log(player.tag);
        //hsl.updatePlayerScore(player.tag);
    }

    void FixedUpdate()
    {
        float moveHorizontal = CnInputManager.GetAxis("Horizontal");
        float moveVertical = CnInputManager.GetAxis("Vertical");

        m_CamForward = Vector3.Scale(m_Cam.forward, new Vector3(1, 0, 1)).normalized;

        Vector3 movement = moveVertical * m_CamForward + moveHorizontal * m_Cam.right;

        if (isControllable)
        {
            rb.AddForce(movement * speed);
        }
    }

	IEnumerator OnTriggerEnter(Collider other)
	{
		hsl = gameObject.GetComponent<HighScoreLogic>();

		/*##########################################################################################################################################
        Player1's collision check
        ##########################################################################################################################################*/
		if(player.tag == "Player1") {
			if(other.gameObject.CompareTag("Cube1")) {
				soundFlag ();
				if(cube_b.active){
					cube_b.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube2");                   
				}
				if(cube_c.active) {
					cube_c.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube3");
				}
				if(cube_d.active) {
					cube_d.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube4");                 
				}
			}
			if(other.gameObject.CompareTag("Cube2")) {
				soundFlag ();
				cube_b.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube2");                   
			}
			if(other.gameObject.CompareTag("Cube3")) {
				soundFlag ();
				cube_c.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube3");
			}
			if(other.gameObject.CompareTag("Cube4")) {
				soundFlag ();
				cube_d.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube4");
			}

			if(other.gameObject.CompareTag("Stormtrooper2") || other.gameObject.CompareTag("Stormtrooper3") || 
				other.gameObject.CompareTag("Stormtrooper4") || other.gameObject.CompareTag("Player2") ||
				other.gameObject.CompareTag("Player3") || other.gameObject.CompareTag("Player4")) {
				if(cube_b.active){
					cube_b.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube2");                    
				}
				if(cube_c.active) {
					cube_c.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube3");  
				}
				if(cube_d.active) {
					cube_d.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube4");                    
				}
			}
			yield return new WaitForSeconds (0);
		}

		/*##########################################################################################################################################
        Player2's collision check
        ##########################################################################################################################################*/
		if(player.tag == "Player2") {
			if(other.gameObject.CompareTag("Cube1")) {
				cube_a.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube1");
			}
			if(other.gameObject.CompareTag("Cube2")) {
				if(cube_a.active){
					cube_a.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube1");                     
				}
				if(cube_c.active) {
					cube_c.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube3");  
				}
				if(cube_d.active) {
					cube_d.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube4");                     
				}
			}
			if(other.gameObject.CompareTag("Cube3")) {
				cube_c.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube3");
			}
			if(other.gameObject.CompareTag("Cube4")) {
				cube_d.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube4");
			}

			if(other.gameObject.CompareTag("Stormtrooper1") || other.gameObject.CompareTag("Stormtrooper3") || 
				other.gameObject.CompareTag("Stormtrooper4") || other.gameObject.CompareTag("Player1") ||
				other.gameObject.CompareTag("Player3") || other.gameObject.CompareTag("Player4")) {
				if(cube_a.active){
					cube_a.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube1");                     
				}
				if(cube_c.active) {
					cube_c.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube3");  
				}
				if(cube_d.active) {
					cube_d.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube4");                   
				}
			}
			yield return new WaitForSeconds (0);
		}

		/*##########################################################################################################################################
        Player3's collision check
        ##########################################################################################################################################*/
		if(player.tag == "Player3") {
			if(other.gameObject.CompareTag("Cube1")) {
				cube_a.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube1");
			}
			if(other.gameObject.CompareTag("Cube2")) {
				cube_b.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube2");
			}
			if(other.gameObject.CompareTag("Cube3")) {
				if(cube_a.active){
					cube_a.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube1");                     
				}
				if(cube_b.active) {
					cube_b.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube2");  
				}
				if(cube_d.active) {
					cube_d.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube4");                     
				}
			}
			if(other.gameObject.CompareTag("Cube4")) {
				cube_d.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube4");
			}

			if(other.gameObject.CompareTag("Stormtrooper2") || other.gameObject.CompareTag("Stormtrooper1") || 
				other.gameObject.CompareTag("Stormtrooper4") || other.gameObject.CompareTag("Player1") ||
				other.gameObject.CompareTag("Player2") || other.gameObject.CompareTag("Player4")) {
				if(cube_a.active){
					cube_a.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube1");                    
				}
				if(cube_b.active) {
					cube_b.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube2");  
				}
				if(cube_d.active) {
					cube_d.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube4");                   
				}
			}
			yield return new WaitForSeconds (0);
		}

		/*##########################################################################################################################################
        Player4's collision check
        ##########################################################################################################################################*/
		if(player.tag == "Player4") {
			if(other.gameObject.CompareTag("Cube1")) {
				cube_a.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube1");
			}
			if(other.gameObject.CompareTag("Cube2")) {
				cube_b.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube2");
			}
			if(other.gameObject.CompareTag("Cube3")) {
				cube_c.active = true;
				myPhotonView.RPC("DeactivateFlag", PhotonTargets.All, "cube3");
			}
			if(other.gameObject.CompareTag("Cube4")) {
				if(cube_a.active){
					cube_a.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube1");                    
				}
				if(cube_b.active) {
					cube_b.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube2");  
				}
				if(cube_c.active) {
					cube_c.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube3");                     
				}
			}

			if(other.gameObject.CompareTag("Stormtrooper2") || other.gameObject.CompareTag("Stormtrooper3") || 
				other.gameObject.CompareTag("Stormtrooper1") || other.gameObject.CompareTag("Player1") ||
				other.gameObject.CompareTag("Player2") || other.gameObject.CompareTag("Player3")) {
				if(cube_a.active){
					cube_a.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube1");  
				}
				if(cube_b.active) {
					cube_b.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube2");  
				}
				if(cube_c.active) {
					cube_c.active = false;
					myPhotonView.RPC("ActivateFlag", PhotonTargets.All, "cube3");  
				}
			}
			yield return new WaitForSeconds (0);
		}
	}


	/*
	 * add for stormtrooper activation
	 */
	void ActivateStormtrooper(string stormtrooperTag, string BB8Tag){
		Debug.Log ("call stormtrooper activation");

		GameObject st = GameObject.FindGameObjectWithTag (stormtrooperTag);
		stc = st.GetComponentInChildren<StormTrooperControl> ();
		stc.Wakeup (BB8Tag);
	}
	//play sound when collecting flag
	void soundFlag(){
//		source.Play ();
	}

	[PunRPC]
	void DeactivateFlag(string cube){
		if (cube == "cube1") cube1.SetActive (false);
		if (cube == "cube2") cube2.SetActive (false);
		if (cube == "cube3") cube3.SetActive (false);
		if (cube == "cube4") cube4.SetActive (false);
	}

	[PunRPC]
	void ActivateFlag(string cube){
		if (cube == "cube1") cube1.SetActive (true);
		if (cube == "cube2") cube2.SetActive (true);
		if (cube == "cube3") cube3.SetActive (true);
		if (cube == "cube4") cube4.SetActive (true);
	}
}