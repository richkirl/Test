#pragma once
#include "WindowLauncher.hpp"
#include "StructureClassesLauncher.hpp"
#include "Shader.hpp"
#include <iostream>
class Rendering : public StructureClassesLauncher
{
public:
	WindowLauncher mypersonalgameses;

	void MasterRender();

	int init() override;
	void refresh() override;
	void close() override;
};

