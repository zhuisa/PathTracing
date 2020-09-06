#include"CScene.h"

int main()
{
	CScene Scene(vec3(0.0, 0.5, -0.5));
	CSphere r(0.032, vec3(-0.15, 0.07, -0.45), CSphere::SMaterial{ 1.0f, 1.0f, 0.4f, vec3(0.99f) });
	CSphere s(0.032, vec3(-0.15, -0.28, -0.45), CSphere::SMaterial{ 0.9f, 0.0f, 0.0f, vec3(0.99f) });
	CSphere p(0.052, vec3(0.27, -0.22, 0.02), CSphere::SMaterial{ 0.9f, 0.0f, 0.0f, vec3(0.99f) });
	CSphere q(0.042, vec3(-0.42, -0.24, -0.04), CSphere::SMaterial{ 1.0f, 1.0f, 0.0f, vec3(0.99f) });
	Scene.addSphere(s);
	Scene.addSphere(p);
	Scene.addSphere(q);
	Scene.addSphere(r);
}