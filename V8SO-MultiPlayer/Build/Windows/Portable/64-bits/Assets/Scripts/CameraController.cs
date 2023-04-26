using UnityEngine;

public class CameraController : MonoBehaviour
{
	public PlayerManager player;

	public float sensitivity = 100f;

	public float clampAngle = 85f;

	private float verticalRotation;

	private float horizontalRotation;

	private void Start()
	{
		verticalRotation = base.transform.localEulerAngles.x;
		horizontalRotation = player.transform.eulerAngles.y;
	}

	private void Update()
	{
		if (UnityEngine.Input.GetKeyDown(KeyCode.Escape))
		{
			ToggleCursorMode();
		}
		if (Cursor.lockState == CursorLockMode.Locked)
		{
			Look();
		}
		UnityEngine.Debug.DrawRay(base.transform.position, base.transform.forward * 2f, Color.red);
	}

	private void Look()
	{
		float num = 0f - UnityEngine.Input.GetAxis("Mouse Y");
		float axis = UnityEngine.Input.GetAxis("Mouse X");
		verticalRotation += num * sensitivity * Time.deltaTime;
		horizontalRotation += axis * sensitivity * Time.deltaTime;
		verticalRotation = Mathf.Clamp(verticalRotation, 0f - clampAngle, clampAngle);
		base.transform.localRotation = Quaternion.Euler(verticalRotation, 0f, 0f);
		player.transform.rotation = Quaternion.Euler(0f, horizontalRotation, 0f);
	}

	private void ToggleCursorMode()
	{
		Cursor.visible = !Cursor.visible;
		if (Cursor.lockState == CursorLockMode.None)
		{
			Cursor.lockState = CursorLockMode.Locked;
		}
		else
		{
			Cursor.lockState = CursorLockMode.None;
		}
	}
}
