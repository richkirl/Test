#pragma once
class StructureClassesLauncher
{
public:
	virtual int init();
	virtual void start();//start program launcher
	virtual void render();
	virtual void refresh();
	virtual void resize();
	virtual void close();
	
};

