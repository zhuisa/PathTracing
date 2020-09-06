#include "CWindow.h"


CWindow::CWindow(int vWidth, int vHeight, string vTitle)
{
	m_Width = vWidth;
	m_Height = vHeight;
	m_Title = vTitle;
	m_FirstMouse = false;
	m_PressMouseButton = false;
	__createWindow();
}

void CWindow::__createWindow()
{
	if (!glfwInit())
	{
		cout << "failed to init window" << endl;
		exit(-1);
	}
		
	glfwWindowHint(GLFW_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
	glfwWindowHint(GLFW_SAMPLES, 16);
	m_pWindow = glfwCreateWindow(m_Width, m_Height, m_Title.c_str(), NULL, NULL);
	if (!m_pWindow)
	{
		cout << "failed to init window" << endl;
		glfwTerminate();
		exit(-1);
	}
	glfwMakeContextCurrent(m_pWindow);
	glfwSetKeyCallback(m_pWindow, processKeyboard);
	glfwSetCursorPosCallback(m_pWindow, processMouse);
	glfwSetMouseButtonCallback(m_pWindow, pressMouseButton);
	glfwSetWindowSizeCallback(m_pWindow, resizeWindow);

}


void processKeyboard(GLFWwindow* vWindow, int vKey, int vScancode, int vAction, int vMode)
{

}

void processMouse(GLFWwindow* vWindow, double vXPos, double vYPos)
{

}

void resizeWindow(GLFWwindow* vWindow, int vWidth, int vHeight)
{
	glViewport(0, 0, vWidth, vHeight);
}

void pressMouseButton(GLFWwindow* vWindow, int vButton, int vAction, int vMode)
{

}