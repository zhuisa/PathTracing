#pragma once
#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<iostream>
#include "CCamera.h"
using namespace std;


class CWindow
{
public:
	CWindow(int vWidth, int vHeight, string vTitle);


private:
	int m_Width;
	int m_Height;
	string m_Title;
	void __createWindow();
	GLFWwindow* m_pWindow;
	bool m_FirstMouse;
	bool m_PressMouseButton;
};

void processKeyboard(GLFWwindow* vWindow, int vKey, int vScancode, int vAction, int vMode);
void processMouse(GLFWwindow* vWindow, double vXPos, double vYPos);
void resizeWindow(GLFWwindow* vWindow, int vWidth, int vHeight);
void pressMouseButton(GLFWwindow* vWindow, int vButton, int vAction, int vMode);
