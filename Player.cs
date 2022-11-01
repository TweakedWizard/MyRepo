using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField]private Transform groundchecktransform = null;
    private bool jumpkeywaspressed;
    private float horizontalinput;
    private Rigidbody rigidbodyComponent;
    private int superjumpsremaining;

    // Start is called before the first frame update
    void Start()
    {
        rigidbodyComponent = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // Check if space key is pressed down
        if (Input.GetKeyDown(KeyCode.Space))
        {
            jumpkeywaspressed = true;
        }

        horizontalinput = Input.GetAxis("Horizontal");
    }

    // FixedUpdate is called once every physic change
    private void FixedUpdate()
    {
        rigidbodyComponent.velocity = new Vector3(horizontalinput, rigidbodyComponent.velocity.y, 0);
        if (Physics.OverlapSphere(groundchecktransform.position, 0.1f).Length == 1)
        {
            return;
        }

        if (jumpkeywaspressed)
        {
            float jumpPower = 7f;
            if (superjumpsremaining > 0)
            {
                jumpPower *= 1.5f;
                superjumpsremaining--;
            }
            rigidbodyComponent.AddForce(Vector3.up * jumpPower, ForceMode.VelocityChange);
            jumpkeywaspressed = false;
        }

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer == 3)
        {
            Destroy(other.gameObject);
            superjumpsremaining++;
        }
    }
    
}