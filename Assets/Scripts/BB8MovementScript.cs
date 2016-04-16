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
	public HighScoreLogic hsl;
	public StormTrooperControl stc;
	public AudioSource source;
	public AudioClip water;

    void Start()
    {
        m_Cam = Camera.main.transform;
        rb = GetComponent<Rigidbody>();
        
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
			if(other.gameObject.CompareTag("Cube1") == true) {
				if(flag_b.active == true){
					flag_b.active = false;
					var cube2 = PhotonNetwork.Instantiate("Cube2", new Vector3(-92, 10, 90), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube2.GetComponent<PhotonView>();                    
				}
				if(flag_c.active == true) {
					flag_c.active = false;
					var cube3 = PhotonNetwork.Instantiate("Cube3", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube3.GetComponent<PhotonView>(); 
				}
				if(flag_d.active == true) {
					flag_d.active = false;
					var cube4 = PhotonNetwork.Instantiate("Cube4", new Vector3(83, 8, -107), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube4.GetComponent<PhotonView>();                    
				}
			}
			if(other.gameObject.CompareTag("Cube2") == true) {
				flag_b.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube3") == true) {
				flag_c.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube4") == true) {
				flag_d.active = true;
				other.gameObject.SetActive(false);
			}

			if(other.gameObject.CompareTag("stormtrooper2") == true || other.gameObject.CompareTag("stormtrooper3") == true || 
				other.gameObject.CompareTag("stormtrooper4") == true || other.gameObject.CompareTag("Player2") == true ||
				other.gameObject.CompareTag("Player3") == true || other.gameObject.CompareTag("Player4") == true) {
				if(flag_b.active == true){
					flag_b.active = false;
					var cube2 = PhotonNetwork.Instantiate("Cube2", new Vector3(-92, 10, 90), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube2.GetComponent<PhotonView>();                    
				}
				if(flag_c.active == true) {
					flag_c.active = false;
					var cube3 = PhotonNetwork.Instantiate("Cube3", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube3.GetComponent<PhotonView>(); 
				}
				if(flag_d.active == true) {
					flag_d.active = false;
					var cube4 = PhotonNetwork.Instantiate("Cube4", new Vector3(83, 8, -107), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube4.GetComponent<PhotonView>();                    
				}
			}
			yield return new WaitForSeconds (0);
		}

		/*##########################################################################################################################################
        Player2's collision check
        ##########################################################################################################################################*/
		if(player.tag == "Player2") {
			if(other.gameObject.CompareTag("Cube1") == true) {
				flag_a.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube2") == true) {
				if(flag_a.active == true){
					flag_a.active = false;
					var cube1 = PhotonNetwork.Instantiate("Cube1", new Vector3(92, 8, 94), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube1.GetComponent<PhotonView>();                    
				}
				if(flag_c.active == true) {
					flag_c.active = false;
					var cube3 = PhotonNetwork.Instantiate("Cube3", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube3.GetComponent<PhotonView>(); 
				}
				if(flag_d.active == true) {
					flag_d.active = false;
					var cube4 = PhotonNetwork.Instantiate("Cube4", new Vector3(83, 8, -107), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube4.GetComponent<PhotonView>();                    
				}
			}
			if(other.gameObject.CompareTag("Cube3") == true) {
				flag_c.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube4") == true) {
				flag_d.active = true;
				other.gameObject.SetActive(false);
			}

			if(other.gameObject.CompareTag("stormtrooper1") == true || other.gameObject.CompareTag("stormtrooper3") == true || 
				other.gameObject.CompareTag("stormtrooper4") == true || other.gameObject.CompareTag("Player1") == true ||
				other.gameObject.CompareTag("Player3") == true || other.gameObject.CompareTag("Player4") == true) {
				if(flag_a.active == true){
					flag_a.active = false;
					var cube1 = PhotonNetwork.Instantiate("Cube1", new Vector3(92, 8, 94), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube1.GetComponent<PhotonView>();                    
				}
				if(flag_c.active == true) {
					flag_c.active = false;
					var cube3 = PhotonNetwork.Instantiate("Cube3", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube3.GetComponent<PhotonView>(); 
				}
				if(flag_d.active == true) {
					flag_d.active = false;
					var cube4 = PhotonNetwork.Instantiate("Cube4", new Vector3(83, 8, -107), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube4.GetComponent<PhotonView>();                    
				}
			}
			yield return new WaitForSeconds (0);
		}

		/*##########################################################################################################################################
        Player3's collision check
        ##########################################################################################################################################*/
		if(player.tag == "Player3") {
			if(other.gameObject.CompareTag("Cube1") == true) {
				flag_a.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube2") == true) {
				flag_b.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube3") == true) {
				if(flag_a.active == true){
					flag_a.active = false;
					var cube1 = PhotonNetwork.Instantiate("Cube1", new Vector3(92, 8, 94), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube1.GetComponent<PhotonView>();                    
				}
				if(flag_b.active == true) {
					flag_b.active = false;
					var cube2 = PhotonNetwork.Instantiate("Cube2", new Vector3(-92, 10, 90), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube2.GetComponent<PhotonView>(); 
				}
				if(flag_d.active == true) {
					flag_d.active = false;
					var cube4 = PhotonNetwork.Instantiate("Cube4", new Vector3(83, 8, -107), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube4.GetComponent<PhotonView>();                    
				}
			}
			if(other.gameObject.CompareTag("Cube4") == true) {
				flag_d.active = true;
				other.gameObject.SetActive(false);
			}

			if(other.gameObject.CompareTag("stormtrooper2") == true || other.gameObject.CompareTag("stormtrooper1") == true || 
				other.gameObject.CompareTag("stormtrooper4") == true || other.gameObject.CompareTag("Player1") == true ||
				other.gameObject.CompareTag("Player2") == true || other.gameObject.CompareTag("Player4") == true) {
				if(flag_a.active == true){
					flag_a.active = false;
					var cube1 = PhotonNetwork.Instantiate("Cube1", new Vector3(92, 8, 94), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube1.GetComponent<PhotonView>();                    
				}
				if(flag_b.active == true) {
					flag_b.active = false;
					var cube2 = PhotonNetwork.Instantiate("Cube2", new Vector3(-92, 10, 90), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube2.GetComponent<PhotonView>(); 
				}
				if(flag_d.active == true) {
					flag_d.active = false;
					var cube4 = PhotonNetwork.Instantiate("Cube4", new Vector3(83, 8, -107), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube4.GetComponent<PhotonView>();                    
				}
			}
			yield return new WaitForSeconds (0);
		}

		/*##########################################################################################################################################
        Player4's collision check
        ##########################################################################################################################################*/
		if(player.tag == "Player4") {
			if(other.gameObject.CompareTag("Cube1") == true) {
				flag_a.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube2") == true) {
				flag_b.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube3") == true) {
				flag_c.active = true;
				other.gameObject.SetActive(false);
			}
			if(other.gameObject.CompareTag("Cube4") == true) {
				if(flag_a.active == true){
					flag_a.active = false;
					var cube1 = PhotonNetwork.Instantiate("Cube1", new Vector3(92, 8, 94), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube1.GetComponent<PhotonView>();                    
				}
				if(flag_b.active == true) {
					flag_b.active = false;
					var cube2 = PhotonNetwork.Instantiate("Cube2", new Vector3(-92, 10, 90), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube2.GetComponent<PhotonView>(); 
				}
				if(flag_c.active == true) {
					flag_c.active = false;
					var cube3 = PhotonNetwork.Instantiate("Cube3", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject; // re-instantiate
					myPhotonView = cube3.GetComponent<PhotonView>();                    
				}
			}

				if(other.gameObject.CompareTag("stormtrooper2") == true || other.gameObject.CompareTag("stormtrooper3") == true || 
					other.gameObject.CompareTag("stormtrooper1") == true || other.gameObject.CompareTag("Player1") == true ||
					other.gameObject.CompareTag("Player2") == true || other.gameObject.CompareTag("Player3") == true) {
					if(flag_a.active == true){
						flag_a.active = false;
						var cube1 = PhotonNetwork.Instantiate("Cube1", new Vector3(92, 8, 94), Quaternion.identity, 0) as GameObject; // re-instantiate
						myPhotonView = cube1.GetComponent<PhotonView>();                    
					}
					if(flag_b.active == true) {
						flag_b.active = false;
						var cube2 = PhotonNetwork.Instantiate("Cube2", new Vector3(-92, 10, 90), Quaternion.identity, 0) as GameObject; // re-instantiate
						myPhotonView = cube2.GetComponent<PhotonView>(); 
					}
					if(flag_c.active == true) {
						flag_c.active = false;
						var cube3 = PhotonNetwork.Instantiate("Cube3", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject; // re-instantiate
						myPhotonView = cube3.GetComponent<PhotonView>();                    
					}
				}
				yield return new WaitForSeconds (0);
			}
			yield return new WaitForSeconds (0);
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

}