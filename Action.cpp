#include <iostream>
#include "Action.h"
#include "OctString.h"
using namespace std;
#include <cstdlib> // для strtol, который заменяет устаревший и не поддерживаемый sscaf в VS

long Action::GetDecimal(AString* pObj) const {
	if (dynamic_cast<OctString*>(pObj)) {
		long dest;
	string source = pObj->GetVal();
		// Изменяем основание на 8 для восьмеричного преобразования
		char* endptr;
		dest = strtol(source.c_str(), &endptr, 8); // 8 – основание
		if (*endptr != '\0') {
			cout << "Error: The octal number format is incorrect." << endl;
			return -1;
		}
		return dest;
	}
	else {
		cout << "Action not supported." << std::endl;
		return -1;
	}
}


/*
string DecimalToOctal(long decimal) {
	string octal = "";
	while (decimal > 0) {
		long remainder = decimal % 8;
		octal = to_string(remainder) + octal; // добавляем остаток в начало строки
		decimal /= 8; // делим на 8
	}
	return octal.empty() ? "0" : octal; // если octal пустой, возвращаем "0"
}
*/