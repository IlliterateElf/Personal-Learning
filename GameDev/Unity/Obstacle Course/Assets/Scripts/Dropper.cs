using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dropper : MonoBehaviour
{
    MeshRenderer renderer;
    Rigidbody rigidbody;
    [SerializeField] float timeToWait = 0f;
    // Start is called before the first frame update
    void Start()
    {
        renderer = GetComponent<MeshRenderer>();
        rigidbody = GetComponent<Rigidbody>();
        renderer.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if(Time.time>=timeToWait)
        {
            GetComponent<MeshRenderer>().enabled = true;
            rigidbody.useGravity = true;
        }
    }
}
