#include "CFormatie.h"
//dd
CFormatie::CFormatie() {
	cout << "CFormatie()" << endl;
	program_muzical_m_clasica = new CProgramMuzical();
}
void CFormatie::set_denumire(string den)
{
	this->denumire = den;
}

string CFormatie::get_denumire()
{
	return this->denumire;
}
vector<IInstrument*> CFormatie::set_instrumente_m_clasica()
{
	cout << "instrumente before size : " << instrumente.size() << " &: " << &instrumente << endl;
	instrumente.push_back(new CPian(102, 203));
	instrumente.push_back(new CChitara(102));
	cout << "instrumente after size : " << instrumente.size() << " &: " << &instrumente << endl;
	return instrumente;
}

vector<IInstrument*> CFormatie::set_instrumente_m_populara()
{
	instrumente1.push_back(new CTrompeta("Denumirea producatorului"));
	instrumente1.push_back(new CPian(302, 565));
	instrumente1.push_back(new CChitara(456));
	return instrumente1;
}

CProgramMuzical* CFormatie::program_muzical()
{
	//program_muzical_m_clasica = new CProgramMuzical();
	CCantec cantec1("Cantec1", 100);
	program_muzical_m_clasica->stabilire_cantece(cantec1);
	CCantec cantec2("Cantec2", 120);
	program_muzical_m_clasica->stabilire_cantece(cantec2);
	return program_muzical_m_clasica;
}
//dd
size_t CFormatie::add_instrument(IInstrument *inst) {
	cout << "add_instrument()" << endl;
	instruments.push_back(inst);
	return instruments.size();
}
size_t CFormatie::set_instruments() {
	cout << "set_instruments()" << endl;
	instruments.push_back(new CTrompeta("Denumirea producatorului"));
	instruments.push_back(new CPian(302, 565));
	return instruments.size();
}
vector<IInstrument*> CFormatie::get_instruments()
{
	return instruments;
}