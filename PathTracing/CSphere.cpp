#include "CSphere.h"


CSphere::CSphere(float vRadius, vec3 vCenter, SMaterial vMaterial)
{
	m_Radius = vRadius;
	m_Center = vCenter;
	m_Material.Absorption = vMaterial.Absorption;
	m_Material.Color = vMaterial.Color;
	m_Material.Disperse = vMaterial.Disperse;
	m_Material.Reflection = vMaterial.Reflection;
}

const float CSphere::getRadius() const
{
	return m_Radius;
}

const vec3 CSphere::getColor() const
{
	return m_Material.Color;
}
const vec3 CSphere::getCenter() const
{
	return m_Center;
}
