#include "CApp.h"

CApp* CApp::instance = nullptr;

CApp& CApp::getInstance()
{
	if (CApp::instance == nullptr)
	{
		//CApp::instance = new CApp();
		//return(*CApp::instance);
		static CApp instance;
		return instance;
	}
}
