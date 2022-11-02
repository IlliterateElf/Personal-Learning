using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    private InputActions inputActions;
    public int speed = 10;

    private void Awake()
    {
        inputActions = new InputActions();
        inputActions.Player.Enable();
    }

    private void Update()
    {
        Vector3 inputVector = inputActions.Player.Move.ReadValue<Vector3>();
        transform.Translate(inputVector * Time.deltaTime * speed);
    }
}
