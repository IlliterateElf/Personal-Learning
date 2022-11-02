using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    private InputActions inputActions;
    private Rigidbody2D rb;
    private GameObject player;
    public int speed = 10;
    public int jumpSpeed = 10;
    private bool onGround = false;

    private void Awake()
    {
        inputActions = new InputActions();
        inputActions.Player.Enable();
        player = GameObject.Find("Player");
        rb = player.GetComponent<Rigidbody2D>();
        rb.freezeRotation = true;
        
    }

    private void FixedUpdate()
    {
        Vector3 inputVector = inputActions.Player.Move.ReadValue<Vector3>();
        float jumpVector = inputActions.Player.Jump.ReadValue<float>();
        if(inputVector != Vector3.zero)
        {
            Move(inputVector);
        }
        if(jumpVector > 0)
        {
            Debug.Log("JumpVector");
            Jump(jumpVector);
        }
    }

    private void Move(Vector3 move)
    {
        transform.Translate(move * Time.deltaTime * speed);
    }

    private void Jump(float jump)
    {
        Debug.Log(jump);
        float i = 0.0f;
        if(onGround == true)
        {
            rb.AddForce(new Vector2(0, jump * Time.deltaTime * jumpSpeed), ForceMode2D.Impulse);
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.CompareTag("Ground"))
        {
            foreach (ContactPoint2D item in collision.contacts)
            {
                if(item.normal.y > 0 && collision.gameObject.CompareTag("Ground"))
                {
                    onGround = true;
                }
            }
        }
        else if(collision.gameObject.CompareTag("Enemy") && onGround == false)
        {
            foreach(ContactPoint2D item in collision.contacts)
            {
                if(item.normal.y > 0 && collision.gameObject.CompareTag("Enemy"))
                {
                    Kill(collision.gameObject);
                }
            }
        }
    }

    private void Kill(GameObject enemy)
    {
        Debug.Log("Kill");
        rb.AddForce(new Vector2(2, Time.deltaTime * jumpSpeed), ForceMode2D.Impulse);
        Destroy(enemy);
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            onGround = false;
        }
    }
}
