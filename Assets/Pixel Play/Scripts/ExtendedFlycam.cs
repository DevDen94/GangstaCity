using UnityEngine;

/*
FEATURES
    WASD/Arrows:    Movement
    Q:    Climb
    E:    Drop
    Shift:    Move faster
    Control:    Move slower
*/
public class ExtendedFlycam : MonoBehaviour
{
    public float cameraSensitivity = 90;
    public float climbSpeed = 4;
    public float normalMoveSpeed = 10;
    public float slowMoveFactor = 0.25f;
    public float fastMoveFactor = 3;

    private float rotationX = 0.0f;
    private float rotationY = 0.0f;

    void Update()
    {
        rotationX += ControlFreak2.CF2Input.GetAxis("Mouse X") * cameraSensitivity * Time.deltaTime;
        rotationY += ControlFreak2.CF2Input.GetAxis("Mouse Y") * cameraSensitivity * Time.deltaTime;
        rotationY = Mathf.Clamp(rotationY, -90, 90);

        transform.localRotation = Quaternion.AngleAxis(rotationX, Vector3.up);
        transform.localRotation *= Quaternion.AngleAxis(rotationY, Vector3.left);

        if (ControlFreak2.CF2Input.GetKey(KeyCode.LeftShift) || ControlFreak2.CF2Input.GetKey(KeyCode.RightShift))
        {
            transform.position += transform.forward * (normalMoveSpeed * fastMoveFactor) * ControlFreak2.CF2Input.GetAxis("Vertical") * Time.deltaTime;
            transform.position += transform.right * (normalMoveSpeed * fastMoveFactor) * ControlFreak2.CF2Input.GetAxis("Horizontal") * Time.deltaTime;
        }
        else if (ControlFreak2.CF2Input.GetKey(KeyCode.LeftControl) || ControlFreak2.CF2Input.GetKey(KeyCode.RightControl))
        {
            transform.position += transform.forward * (normalMoveSpeed * slowMoveFactor) * ControlFreak2.CF2Input.GetAxis("Vertical") * Time.deltaTime;
            transform.position += transform.right * (normalMoveSpeed * slowMoveFactor) * ControlFreak2.CF2Input.GetAxis("Horizontal") * Time.deltaTime;
        }
        else
        {
            transform.position += transform.forward * normalMoveSpeed * ControlFreak2.CF2Input.GetAxis("Vertical") * Time.deltaTime;
            transform.position += transform.right * normalMoveSpeed * ControlFreak2.CF2Input.GetAxis("Horizontal") * Time.deltaTime;
        }


        if (ControlFreak2.CF2Input.GetKey(KeyCode.Q)) { transform.position += transform.up * climbSpeed * Time.deltaTime; }
        if (ControlFreak2.CF2Input.GetKey(KeyCode.E)) { transform.position -= transform.up * climbSpeed * Time.deltaTime; }
    }
}