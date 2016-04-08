using UnityEngine;
using System.Collections;
using ExitGames.Client.Photon;
using Photon;
using System;

public class HighScoreLogic : PunBehaviour {
    public bool gotCube = false;
    public BB8MovementScript bbscript;
    private string currentPlayerName;
    ExitGames.Client.Photon.Hashtable dict;


    void Update()
    {
        //bb8 collides with cube
        if (true) //placeholder
        {
            ICollectedACube();
        }
    }
    //dummy scoring method 
    public void ICollectedACube()
    {
        this.gotCube = true;
    }

    public void updatePlayerScore()
    {
        currentPlayerName = "Player" + PhotonNetwork.player.ID.ToString();
        dict = PhotonNetwork.room.customProperties;

       //player name doesn't exist
       if (!(dict.ContainsKey(currentPlayerName)))
        {
            dict[currentPlayerName] = 1;
        }
        //player name exist
        else if (dict.ContainsKey(currentPlayerName))
        {
            // this is the score
            dict[currentPlayerName] = 3 + System.Convert.ToInt32(dict[currentPlayerName]);
        }
        PhotonNetwork.room.SetCustomProperties(dict);
    }
}
