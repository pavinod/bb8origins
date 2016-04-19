using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreManager : MonoBehaviour
{
	public static int score1; // The player's score.
	public static int score2;
	public static int score3;
	public static int score4;
	public static bool waiting;
	public static string waitingtext;
	public static bool start;
	public static int count;


	Text text;                      // Reference to the Text component.


	void Awake ()
	{
		// Set up the reference.
		text = GetComponent <Text> ();

		waiting = true;
		start = false;

		// Reset the score.
		score1 = 0;
		score2 = 0;
		score3 = 0;
		score4 = 0;
		count = 5;
	}


	void Update ()
	{
		// Set the displayed text to be the word "Score" followed by the score value.
		if (start) {
			text.text = "<color=blue>" + score1 + "</color>" + "       " + 
				"<color=yellow>" + score2 + "</color>" + "       " +
				"<color=red>" + score3 + "</color>" + "       " + 
				"<color=green>" + score4 + "</color>";
		} else if (waiting) {
			text.text = "<color=white>" + waitingtext + "</color>";
		} else {
			text.text = count + "...";
		}
	}
}