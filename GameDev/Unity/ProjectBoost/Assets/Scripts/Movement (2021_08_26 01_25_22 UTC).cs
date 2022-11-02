using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
     Rigidbody rb;
    [SerializeField] int mainThrust = 1;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        ProcessThrust();
        ProcessRotating();
    }

    void ProcessThrust()
    {
        if (Input.GetKey(KeyCode.Space))
        {
            rb.AddRelativeForce(Vector3.up*Time.deltaTime*mainThrust);
        }
    }

    private static void ProcessRotating()
    {
        if (Input.GetKey(KeyCode.A) && Input.GetKey(KeyCode.D)) { }
        else if (Input.GetKey(KeyCode.A))
        {
            Debug.Log("Pressed A - Left");
        }
        else if (Input.GetKey(KeyCode.D))
        {
            Debug.Log("Pressed D - Right");
        }
    }
}
