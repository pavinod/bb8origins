using UnityEngine;
using System.Collections;

public class flag: MonoBehaviour
{

	int blendShapeCount;
	SkinnedMeshRenderer skinnedMeshRenderer;
	Mesh skinnedMesh;
	float blendOne = 0f;
	float blendTwo = 0f;
	float blendSpeed = 1f;
	bool blendOneFinished = false;
	private int index = 1;

	void Awake ()
	{
		skinnedMeshRenderer = GetComponent<SkinnedMeshRenderer> ();
		skinnedMesh = GetComponent<SkinnedMeshRenderer> ().sharedMesh;
	}

	void Start ()
	{
		blendShapeCount = skinnedMesh.blendShapeCount; 
	}

	void Update ()
	{
		if (index >= 1) {
			skinnedMeshRenderer.SetBlendShapeWeight (index - 1, 0f);
		} else {
			skinnedMeshRenderer.SetBlendShapeWeight (59, 0f);
		}
			skinnedMeshRenderer.SetBlendShapeWeight (index, 30f);
			index = (index + 1) % 60;


	}
}