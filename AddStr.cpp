#include <iostream>
#include <typeinfo>
#include "SymbString.h"
#include "AddStr.h"
using namespace std;

void AddStr::Operate(AString* pObj, AString* pObj1) {
	if (SymbString* f = dynamic_cast<SymbString*>(pObj)) {
		if (SymbString* f1 = dynamic_cast<SymbString*>(pObj1)){
			string str;
			string s1 = pObj->GetVal();
			string s2 = pObj1->GetVal();
			size_t pos = s1.find(s2);
			if (pos == string::npos) {
				str = s1 + s2;
				cout << "new string: " << str << endl;
			}
			else
			{
				str = s1.erase(pos, s2.length());
				cout << "new string: " << str << endl;
			}
		}
		else
		{
			cout << "Error!\n Second string a not SymbString" << endl;
			return;
		}
	}
	else {
		cout << "Error!\n First string a not SymbString" << endl;
		return;
	}
	/*string str;
	string s1 = pObj->GetVal();
	string s2 = pObj1->GetVal();
	size_t pos = s1.find(s2);
	if (pos == string::npos){
		str = s1 + s2;
		cout << "new string: " << str << endl;
	}
	else
	{
		str = s1.erase(pos, s2.length());
		cout << "new string: " << str << endl;
	}*/
}
AddStr add_str; // Глобальный объект