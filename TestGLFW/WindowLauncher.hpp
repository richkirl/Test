#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "StructureClassesLauncher.hpp"
#include <iostream>
class WindowLauncher : public StructureClassesLauncher
{
public:
	GLFWwindow* window=0;
	bool fullscrean = false;
	int init() override;
	void refresh() override;
	void close() override;
	//void draw();

	GLFWwindow* GetWindowCurrrent();
	void setFullscreen(bool f);
	bool getFullscreen();

};

