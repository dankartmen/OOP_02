#include "OctString.h"
#include<iostream>
#include<string>
using namespace std;

bool IsOctStrVal(string _str) { // 1
	for (int i = 0; i < _str.size(); ++i)
		if (-1 == alph.find_first_of(_str[i]))
			return false;
	return true;
}
OctString::OctString(string _name, string _val) : name(_name) {
	if (IsOctStrVal(_val)) val = _val;
}