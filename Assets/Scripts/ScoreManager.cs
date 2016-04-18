using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreManager : MonoBehaviour
{
	public static int score1; // The player's score.
	public static int score2;
	public static int score3;
	public static int score4;


	Text text;                      // Reference to the Text component.


	void Awake ()
	{
		// Set up the reference.
		text = GetComponent <Text> ();

		// Reset the score.
		score1 = 0;
		score2 = 0;
		score3 = 0;
		score4 = 0;
	}


	void Update ()
	{
		// Set the displayed text to be the word "Score" followed by the score value.
		text.text = score1 + "    " + score2 + "    " + score3 + "    " + score4;
	}
}