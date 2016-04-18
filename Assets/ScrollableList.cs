using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class ScrollableList : MonoBehaviour
{
	public GameObject itemPrefab;
	public int itemCount =3, columnCount = 1;
	public Button refresh;

	void OnGUI()
	{



	}
	void Awake(){
		refresh.onClick.AddListener (refreshRooms);
	}
	void refreshRooms(){

		RectTransform rowRectTransform = itemPrefab.GetComponent<RectTransform>();
		RectTransform containerRectTransform = gameObject.GetComponent<RectTransform>();

		//calculate the width and height of each child item.
		float width = containerRectTransform.rect.width / columnCount;
		float ratio = width / rowRectTransform.rect.width;
		float height = rowRectTransform.rect.height * ratio;
		int rowCount = itemCount / columnCount;
		if (itemCount % rowCount > 0)
			rowCount++;

		//adjust the height of the container so that it will just barely fit all its children
		float scrollHeight = height * rowCount;
		//		containerRectTransform.offsetMin = new Vector2(containerRectTransform.offsetMin.x, -scrollHeight / 2);
		//		containerRectTransform.offsetMax = new Vector2(containerRectTransform.offsetMax.x, scrollHeight / 2);

		int j = 0;
		int i = 0;
		//for (int i = 0; i < itemCount; i++)
		int numRooms= PhotonNetwork.countOfRooms;

		foreach (RoomInfo game in PhotonNetwork.GetRoomList())
		{
			//this is used instead of a double for loop because itemCount may not fit perfectly into the rows/columns
			if (i % columnCount == 0)
				j++;

			//create a new item, name it, and set the parent
			GameObject newItem = Instantiate(itemPrefab) as GameObject;
			newItem.SetActive (true);
			newItem.name = gameObject.name + " "+ game.name;
			Text txt=newItem.GetComponentInChildren<Text> ();
			//newItem.GetComponentsInChildren<Text>()[0].text="tst";
			newItem.GetComponentsInChildren<Text>()[1].text=game.name;
			newItem.GetComponentsInChildren<Text>()[2].text= game.playerCount + "/" + game.maxPlayers;
			newItem.GetComponentInChildren<Button> ().GetComponentInChildren<Text>().text="Join";
            if (game.playerCount == game.maxPlayers)
            {
                newItem.GetComponentInChildren<Button>().enabled = false;
            }
            //but.GetComponentInChildren<Text>().text= "Join "+ game.name;

            //Button but = GameObject.Find ("JoinRoom").GetComponent<Button> ();
            newItem.GetComponentInChildren<Button> ().onClick.AddListener(()=> {
				PhotonNetwork.JoinRoom(game.name);
			});

			Debug.Log ("Logging "+game.name + " " + game.playerCount + "/" + game.maxPlayers);

			newItem.transform.parent = gameObject.transform;

			//move and size the new item
			RectTransform rectTransform = newItem.GetComponent<RectTransform>();

			float x = -containerRectTransform.rect.width / 2 + width * (i % columnCount);
			float y = containerRectTransform.rect.height / 2 - height * j;
			rectTransform.offsetMin = new Vector2(x, y);

			x = rectTransform.offsetMin.x + width;
			y = rectTransform.offsetMin.y + height;
			rectTransform.offsetMax = new Vector2(x, y);
			i++;
		}



	}

}
