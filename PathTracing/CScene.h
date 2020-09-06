#pragma once
#include<vector>
#include<glm/glm.hpp>
#include"CSphere.h"
#include"Common.cpp"


using namespace std;
using namespace glm;


class CScene
{
public:
	CScene(vec3 vLightPosition);
	struct SCornellBox
	{
		float WallPositions[BOXFACENUM];
		float Absorption[BOXFACENUM];
		float Disperse[BOXFACENUM];
		float Reflectivity[BOXFACENUM];
		vec3 Normals[BOXFACENUM];
		vec3 Colors[BOXFACENUM];
	};

	struct STriangle
	{
		vec3 Vertex0;
		vec3 Vertex1;
		vec3 Vertex2;
		vec3 Normal0;
		vec3 Normal1;
		vec3 Normal2;
		vec2 UV0;
		vec2 UV1;
		vec2 UV2;
	};

	void addSphere(CSphere vSphere);
	void popSphere();

private:
	vec3 m_LightPosition;
	void __defaultScene();
	SCornellBox m_CornellBox;
	vector<CSphere> m_Spheres;

};

