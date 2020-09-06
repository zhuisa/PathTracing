#include "CCamera.h"


CCamera::CCamera(vec3 vPosition = vec3(0.0f, 0.0f, 0.0f), vec3 m_WorldUp = vec3(0.0f, 1.0f, 0.0f))
{
	m_Position = vPosition;
	m_WordUp = m_WorldUp;
	m_Front = vec3(0.0f, 0.0f, -1.0f);
	m_Yaw = YAW;
	m_Pitch = PITCH;
	m_MouseSensitivity = SENSITIVITY;
	m_MovementSpeed = SPEED;
	m_Zoom = ZOOM;
	__updateCamera();
}
const mat4 CCamera::getViewMatrix() const
{
	return lookAt(m_Position, m_Position + m_Front, m_Up);
}

void CCamera::processKeyboard(ECameraMovement vDirection, float vDeltaTime)
{
	float Velocity = vDeltaTime * m_MovementSpeed;
	if (vDirection == FORWARD)
	{
		m_Position += m_Front * Velocity;
	}
	else if (vDirection == BACKWARD)
	{
		m_Position -= m_Front * Velocity;
	}
	else if (vDirection == RIGHT)
	{
		m_Position += m_Right * Velocity;
	}
	else if (vDirection == LEFT)
	{
		m_Position -= m_Right * Velocity;
	}
}
void CCamera::processMouseMovement(float vXOffset, float vYOffset)
{
	m_Yaw += vXOffset * m_MouseSensitivity;
	m_Pitch += vYOffset * m_MouseSensitivity;
	if (m_Pitch > 89.0f)
	{
		m_Pitch = 89.0f;
	}
	if (m_Pitch < -89.0f)
	{
		m_Pitch = -89.0f;
	}
	__updateCamera();
}

void CCamera::processMouseScroll(float vYOffset)
{

}
void CCamera::__updateCamera()
{
	vec3 TempFront;
	TempFront.x = cos(radians(m_Yaw)*cos(radians(m_Pitch)));
	TempFront.y = sin(radians(m_Pitch));
	TempFront.z = sin(radians(m_Yaw)*cos(radians(m_Pitch)));
	m_Front = normalize(TempFront);
	m_Right = normalize(cross(m_Front, m_WordUp));
	m_Up = normalize(cross(m_Right, m_Front));
}