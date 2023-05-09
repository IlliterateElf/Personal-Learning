using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour
{
    [SerializeField] float moveMult = 1;

    // Start is called before the first frame update
    void Start()
    {
        PrintInstructions();
    }

    // Update is called once per frame
    void Update()
    {
        MovePlayer();
    }

    void MovePlayer()
    {
        float xValue = Input.GetAxis("Horizontal") * Time.deltaTime * moveMult;
        float zValue = Input.GetAxis("Vertical") * Time.deltaTime * moveMult;
        transform.Translate(xValue, 0, zValue);
    }

    void PrintInstructions()
    {
        Debug.Log("Welcome to the game");
        Debug.Log("To control your character use WASD or the arrow keys");
        Debug.Log("This game is a WIP, any bugs found please use the in game report function");
    }
}
