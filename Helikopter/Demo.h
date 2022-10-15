#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float brotasi = 0,
		rspeed = 0,
		scale = 0,
		speed = 0,
		xspeed = 0,
		yspeed = 0,
		x = 0,
		y = 0;
	float pos1 = 0;
	float left, right;
	double seconds = 0.0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);

	void BuildColoredCube();
	void BuildColoredCube1();
	void BuildColoredCube2();
	void BuildColoredCube3();
	void BuildColoredCube4();
	void BuildColoredCube5();
	void BuildColoredCube6();

	void DrawColoredCube();
	void DrawColoredCube1();
	void DrawColoredCube2();
	void DrawColoredCube3();
	void DrawColoredCube4();
	void DrawColoredCube5();
	void DrawColoredCube6();

	void BuildColoredPlane();
	void DrawColoredPlane();
};
