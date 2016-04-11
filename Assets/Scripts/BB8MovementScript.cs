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
        }
    }

    void Update()
    {
        if (CnInputManager.GetButtonDown("Jump") && jumpEnb && isControllable)
        {
            rb.AddForce(new Vector3(0, jumpPower, 0));
            jumpEnb = false;
        }
        Debug.Log(player.tag);
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

        if (other.gameObject.CompareTag("CubeA") == true)
        {
            if (player.tag == "Player1")
            {
				
                if (flag_c.active == true)
                {
                    var cube3 = PhotonNetwork.Instantiate("CubeC", new Vector3(94, 7, 93), Quaternion.identity, 0) as GameObject; // re-instantiate
                    myPhotonView = cube3.GetComponent<PhotonView>();
                    //Debug.Log (GameObject.FindWithTag("CubeC"));
                    flag_c.SetActive(false);
					hsl.updatePlayerScore(player.tag);
					/*
					 * add for stormtrooper activation
					 */
					ActivateStormtrooper ("Player1");
                }
            }
            else if (player.tag == "Player2")
            {
                flag_a.SetActive(true);
                other.gameObject.SetActive(false);
            }
            yield return new WaitForSeconds(0);
        }
        if (other.gameObject.CompareTag("CubeB") == true)
        {
            if (player.tag == "Player3")
            {
                if (flag_d.active == true)
                {
                    var cube2 = PhotonNetwork.Instantiate("CubeD", new Vector3(83, 8, -107), Quaternion.identity, 0) as GameObject; // re-instantiate
                    myPhotonView = cube2.GetComponent<PhotonView>();
                    //Debug.Log (GameObject.FindWithTag("CubeC"));
                    flag_d.SetActive(false);
					hsl.updatePlayerScore(player.tag);
					/*
					 * add for stormtrooper activation
					 */
					ActivateStormtrooper ("Player1");
                }
            }
            else if (player.tag == "Player4")
            {
                flag_b.SetActive(true);
                other.gameObject.SetActive(false);
            }
            yield return new WaitForSeconds(0);
        }

        if (other.gameObject.CompareTag("CubeC") == true)
        {
            if (player.tag == "Player2")
            {
                if (flag_a.active == true)
                {
                    var cube1 = PhotonNetwork.Instantiate("CubeA", new Vector3(92, 8, 94), Quaternion.identity, 0) as GameObject;
                    myPhotonView = cube1.GetComponent<PhotonView>();
                    //Debug.Log (GameObject.FindWithTag("CubeC"));
                    flag_a.SetActive(false);
					hsl.updatePlayerScore(player.tag);
					/*
					 * add for stormtrooper activation
					 */
					ActivateStormtrooper ("Player1");
                }
            }
            else if (player.tag == "Player1")
            {
                flag_c.SetActive(true);
                other.gameObject.SetActive(false);
            }
            yield return new WaitForSeconds(0);
        }
        if (other.gameObject.CompareTag("CubeD") == true)
        {
            if (player.tag == "Player4")
            {
                if (flag_b.active == true)
                {
                    var cube4 = PhotonNetwork.Instantiate("CubeB", new Vector3(-92, 8, 90), Quaternion.identity, 0) as GameObject; // re-instantiate
                    myPhotonView = cube4.GetComponent<PhotonView>();
                    //Debug.Log (GameObject.FindWithTag("CubeC"));
                    flag_b.SetActive(false);
					hsl.updatePlayerScore(player.tag);
					/*
					 * add for stormtrooper activation
					 */
					ActivateStormtrooper ("Player1");
                }
            }
            else if (player.tag == "Player3")
            {
                flag_d.SetActive(true);
                other.gameObject.SetActive(false);

            }
            yield return new WaitForSeconds(0);
        }
    }

	/*
	 * add for stormtrooper activation
	 */
	void ActivateStormtrooper(string playerTag){
		Debug.Log ("call stormtrooper activation");
		stc.Wakeup (playerTag);
	}

}