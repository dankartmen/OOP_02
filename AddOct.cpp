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
			//cout << "Result on octal: " << str << endl; // Хотел, чтобы результат ещё в восьмеричной системе выводился,
														  // но компилятор при запуске .exe выдавал ошибку "LNK2019 не разрешенный внешний символ"
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
AddOct add_oct; // Глобальный объект