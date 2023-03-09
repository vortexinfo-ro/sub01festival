#include "CProgramMuzical.h"

vector<CCantec> CProgramMuzical::stabilire_cantece(CCantec& name)
{
	cantece.push_back(name);
	return cantece;
}

vector<CCantec> CProgramMuzical::return_cantece()
{
	return cantece;
}

istream& operator<<(istream& out, vector<CCantec>& data)
{
	/*for (int i = data.begin(); i < data.end(); i++)
		out<< data[i] << " ";*/
	return out;
}
