#pragma once

class CApp
{
private:
	CApp(){}
	static CApp* instance;
public:
	static CApp& getInstance();

};

