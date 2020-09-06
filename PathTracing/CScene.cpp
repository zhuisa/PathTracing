#include"CScene.h"


CScene::CScene(vec3 vLightPosition)
{
	m_LightPosition = vLightPosition;
	__defaultScene();
}

void CScene::addSphere(CSphere vSphere)
{
	m_Spheres.push_back(vSphere);
}

void CScene::popSphere()
{
	m_Spheres.pop_back();
}

void CScene::__defaultScene()
{
	m_CornellBox.WallPositions[0] = FRONTWALLPOSOTION;
	m_CornellBox.Normals[0] = vec3(0, 0, 1);

	m_CornellBox.WallPositions[1] = LEFTWALLPOSITION;
	m_CornellBox.Normals[1] = vec3(0, 1, 0);

	m_CornellBox.WallPositions[2] = RIGHTWALLPOSITION;
	m_CornellBox.Normals[2] = vec3(0, -1, 0);

	m_CornellBox.WallPositions[3] = UPWALLPOSITION;
	m_CornellBox.Normals[3] = vec3(-1, 0, 0);

	m_CornellBox.WallPositions[4] = DOWNWALLPOSITION;
	m_CornellBox.Normals[4] = vec3(1, 0, 0);

	for (int  i = 0; i < BOXFACENUM; i++)
	{
		m_CornellBox.Colors[i] = vec3(1);
		m_CornellBox.Absorption[i] = 0.9;
		m_CornellBox.Disperse[i] = 0;
		m_CornellBox.Reflectivity[i] = 0;
	}
}