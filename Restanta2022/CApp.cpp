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
void CApp::run()
{
	CFormatieMClasica formatie_m_clasica;
	formatie_m_clasica.set_denumire("Formatie muzica clasica.");
	this->formatii.push_back(formatie_m_clasica);
	cout << this->formatii[0].get_denumire() << endl;
	formatii[0].set_instrumente_m_clasica();
	formatii[0].set_instrumente_m_clasica()[0]->emite_sunet();
	formatii[0].set_instrumente_m_clasica()[1]->emite_sunet();


	CFormatieMPopulara formatie_m_populara;
	formatie_m_populara.set_denumire("Formatie muzica populara.");
	this->formatii.push_back(formatie_m_populara);
	cout << this->formatii[1].get_denumire() << endl;
	formatii[1].set_instrumente_m_populara()[0]->emite_sunet();
	formatii[1].set_instrumente_m_populara()[1]->emite_sunet();
	formatii[1].set_instrumente_m_populara()[2]->emite_sunet();

	//formatii[0].program_muzical()->return_cantece()[0];

}
