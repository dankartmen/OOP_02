#include <iostream>
#include "ShowDec.h"
#include "OctString.h"
using namespace std;
void ShowDec::Operate(AString* pObj) {
	cout << pObj->GetName() << ": ";
	int decVal = GetDecimal(pObj);
	if (decVal != -1) cout << GetDecimal(pObj) << endl;
	cin.get();
}
ShowDec show_dec; // Глобальный объект
