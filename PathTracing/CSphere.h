#pragma once
#include<glm/glm.hpp>
using namespace glm;


class CSphere
{
public:
	struct SMaterial
	{
		float Absorption;
		float Disperse;
		float Reflection;
		vec3 Color;
	};

	CSphere(float vRadius, vec3 vCenter, SMaterial vMaterial);
	const float getRadius() const;
	const vec3 getColor() const;
	const vec3 getCenter() const;

private:
	vec3 m_Center;
	float m_Radius;
	SMaterial m_Material;

};

