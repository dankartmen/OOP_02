#include "AddOct.h"
#include "OctString.h"
#include <iostream>
using namespace std;

void AddOct::Operate(AString* pObj, AString* pObj1) {
	if (OctString* f = dynamic_cast<OctString*>(pObj)) {
		if (OctString* f1 = dynamic_cast<OctString*>(pObj1)) {
			long add = GetDecimal(pObj) + GetDecimal(pObj1);
			cout << "Result on decimal: " << add << endl;
			//string str = DecimalToOctal(add);
			//cout << "Result on octal: " << str << endl; // �����, ����� ��������� ��� � ������������ ������� ���������,
														  // �� ���������� ��� ������� .exe ������� ������ "LNK2019 �� ����������� ������� ������"
		}
		else
		{
			cout << "Error!\nSecond string a not OctString" << endl;
			return;
		}
	}
	else {
		cout << "Error!\nFirst string a not OctString" << endl;
		return;
	}
	
}
AddOct add_oct; // ���������� ������