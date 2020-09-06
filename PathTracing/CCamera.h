#pragma once
#include<GL/glew.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include "common.cpp"

using namespace glm;

enum ECameraMovement
{
	FORWARD,
	BACKWARD,
	LEFT,
	RIGHT
};


class CCamera
{
public:
	CCamera(vec3 vPosition = vec3(0.0f, 0.0f, 0.0f), vec3 m_Up = vec3(0.0f, 1.0f, 0.0f));
	const mat4 getViewMatrix() const;
	void processKeyboard(ECameraMovement vDirection, float vDeltaTime);
	void processMouseMovement(float vXOffset, float vYOffset);
	void processMouseScroll(float vYOffset);

private:
	vec3 m_Position;
	vec3 m_Front;
	vec3 m_WordUp;
	vec3 m_Up;
	vec3 m_Right;
	float m_Yaw;
	float m_Pitch;
	float m_MovementSpeed;
	float m_MouseSensitivity;
	float m_Zoom;
	void __updateCamera();

};

