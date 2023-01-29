#include "CApp.h"
#include <iostream>
//CApp* CApp::instance = nullptr;

CApp& CApp::getInstance()
{
	/*if (CApp::instance == nullptr)
	{
		CApp::instance = new CApp();
		return(*CApp::instance);
	}*/
	static CApp instance;
	return instance;
}
void CApp::show() {
	std::cout << "CApp show()" << std::endl;
}
