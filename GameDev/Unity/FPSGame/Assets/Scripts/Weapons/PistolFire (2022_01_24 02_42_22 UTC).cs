using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PistolFire : MonoBehaviour
{
    public GameObject blackPistol;
    public bool isFiring = false;
    /*
    private void Start()
    {
        GetComponent<PlayerInput>();
        playerInput.onActionTriggered += Jump;

    }

    public void Fire(InputAction.CallbackContext context)
    {
        if (context.action.name != "Jump") return;
        if (context.performed)
        {
            Debug.Log("Jump");
        }
    }


    // Update is called once per frame
    void Update()
    {
        if(Input.GetButtonDown("Fire1"))
        {
            if(isFiring == false)
            {
                StartCoroutine(FireThePistol());
            }
        }
    }

    IEnumerator FireThePistol()
    {
        isFiring = true;
        blackPistol.GetComponent<Animator>().Play("FirePistol");
        yield return new WaitForSeconds(0.25f);
        blackPistol.GetComponent<Animator>().Play("New State");
        isFiring = false;
    }
        */
}
