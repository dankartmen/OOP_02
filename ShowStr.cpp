#include <iostream>
#include "ShowStr.h"
using namespace std;
void ShowStr::Operate(AString* pObj) {
	cout << pObj->GetName() << ": " << pObj->GetVal() << endl;
	cin.get();
}
ShowStr show_str; // Глобальный объект