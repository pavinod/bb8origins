using UnityEngine;
using System.Collections;
using ExitGames.Client.Photon;
using Photon;
using System;

public class HighScoreLogic : PunBehaviour {
    private string currentPlayerName;
    ExitGames.Client.Photon.Hashtable dict;


    public void addPlayerScore(string playertag)
	{	
		currentPlayerName = playertag;
        dict = PhotonNetwork.room.customProperties;

       //create score for new player if it doesn't exist, if not, updates it
       if (!(dict.ContainsKey(currentPlayerName)))
        {
            dict[currentPlayerName] = 1;
        }
        else if (dict.ContainsKey(currentPlayerName))
        {
             //+3 points every time method is invoked
            dict[currentPlayerName] = 1 + System.Convert.ToInt32(dict[currentPlayerName]);
        }
        PhotonNetwork.room.SetCustomProperties(dict);
    }

    public void subtractPlayerScore(string playertag)
    {
        currentPlayerName = playertag;
        dict = PhotonNetwork.room.customProperties;

        //create score for new player if it doesn't exist, if not, updates it
        if (!(dict.ContainsKey(currentPlayerName)))
        {
            dict[currentPlayerName] = 1;
        }
        else if (dict.ContainsKey(currentPlayerName))
        {
            //+3 points every time method is invoked
            dict[currentPlayerName] = System.Convert.ToInt32(dict[currentPlayerName]) - 1 ;
        }
        PhotonNetwork.room.SetCustomProperties(dict);
    }
}
