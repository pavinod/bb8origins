using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FinalScoreManager : MonoBehaviour {

	public static bool ended;

	Text finalScore;

	// Use this for initialization
	void Awake () {
		// Set up the reference.
		finalScore = GetComponent <Text> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (ended) {
			displayScore ();
		}

	}

	void displayScore(){
		int[] scoreList = new int[4];
		scoreList[0] = ScoreManager.score1;
		scoreList[1] = ScoreManager.score2;
		scoreList[2] = ScoreManager.score3;
		scoreList[3] = ScoreManager.score4;
		int max = scoreList [0];
		for (int i = 1; i < 4; i++) {
			if (scoreList[i] > max){
				max = scoreList [i];
			}
		}

		string[] whoWin = new string[4]{"","","",""};
		if (max != 0) {
			for (int j = 0; j < 4; j++) {
				if (scoreList [j] == max) {
					whoWin[j] = "Win!!";
				}
			}
		}
			
		finalScore.text = "<color=white>  Final Score: \n\n </color>" +
			"<color=blue> Player1:   " + scoreList [0] + "  " + whoWin [0] + "</color>\n" +
		"<color=yellow>  Player2:   " + scoreList [1] + "  " + whoWin [1] + "</color>\n" +
		"<color=red>  Player3:   " + scoreList [2] + "  " + whoWin [2] + "</color>\n" +
		"<color=green>  Player4:   " + scoreList [3] + "  " + whoWin [3] + "</color>\n";
	}
}
