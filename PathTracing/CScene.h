#pragma once
#include<vector>
#include<glm/glm.hpp>

#define BOXFACENUM 5
#define FRONTWALLPOSOTION -0.9
#define RIGHTWALLPOSITION 0.7
#define LEFTWALLPOSITION -0.7
#define DOWNWALLPOSITION -0.5
#define UPWALLPOSITION 0.5


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

private:
	vec3 m_LightPosition;
	void __defaultScene();
	SCornellBox m_CornellBox;

};

