using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField]
    private float moveForce = 10f;
    [SerializeField]
    private float jumpForce = 7f;
    private float movementX;
    [SerializeField]
    private Rigidbody2D mybody;
    private SpriteRenderer sr;
    private Animator anim;
    private string Walk_Animation = "Walk";

    // Awake is the first executed command
    private void Awake()
    {
        mybody = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        sr = GetComponent<SpriteRenderer>();
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        PlayerMoveKeyboard();
        AnimatePlayer();
    }
    private void FixedUpdate()
    {
        PlayerJump();
    }

    void PlayerMoveKeyboard()
    {
        movementX = Input.GetAxisRaw("Horizontal");
        transform.position += new Vector3(movementX, 0f, 0f) * Time.deltaTime * moveForce;
    }

    void AnimatePlayer()
    {
        if (movementX > 0)
        {
            anim.SetBool(Walk_Animation, true);
            sr.flipX = false;
        }
        else if (movementX < 0)
        {
            anim.SetBool(Walk_Animation, true);
            sr.flipX = true;
        }
        else
        {
            anim.SetBool(Walk_Animation, false);
        }

    }
    void PlayerJump()
    {
        if(Input.GetButtonDown("Jump"))
        {
            mybody.AddForce(new Vector2(0f, jumpForce), ForceMode2D.Impulse);
        }
    }

} // class
