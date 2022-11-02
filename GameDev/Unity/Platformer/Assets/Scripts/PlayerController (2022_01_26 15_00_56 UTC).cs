using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

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
            Jump(jumpVector);
        }
    }

    private void Move(Vector3 move)
    {
        transform.Translate(move * Time.deltaTime * speed);
    }

    private void Jump(float jump)
    {
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
        rb.constraints = RigidbodyConstraints2D.FreezePositionX;
        rb.AddForce(new Vector2(0, Time.deltaTime * jumpSpeed), ForceMode2D.Impulse);
        rb.constraints = RigidbodyConstraints2D.None;
        rb.constraints = RigidbodyConstraints2D.FreezeRotation;
        Destroy(enemy);
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            onGround = false;
        }
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.name == "GameEnd")
        {
            Debug.Log("GameEnd");
            Scene sceneToLoad = SceneManager.GetSceneByName("Level2");
            SceneManager.LoadScene(sceneToLoad.name, LoadSceneMode.Additive);
        }
    }
}
