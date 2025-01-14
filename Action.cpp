#include <iostream>
#include "Action.h"
#include "OctString.h"
using namespace std;
#include <cstdlib> // ��� strtol, ������� �������� ���������� � �� �������������� sscaf � VS

long Action::GetDecimal(AString* pObj) const {
	if (dynamic_cast<OctString*>(pObj)) {
		long dest;
	string source = pObj->GetVal();
		// �������� ��������� �� 8 ��� ������������� ��������������
		char* endptr;
		dest = strtol(source.c_str(), &endptr, 8); // 8 � ���������
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
		octal = to_string(remainder) + octal; // ��������� ������� � ������ ������
		decimal /= 8; // ����� �� 8
	}
	return octal.empty() ? "0" : octal; // ���� octal ������, ���������� "0"
}
*/