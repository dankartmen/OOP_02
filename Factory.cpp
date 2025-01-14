#include <iostream>
#include "Factory.h"
#include "Menu.h"
#include "SymbString.h"
#include "OctString.h"
using namespace std;
#define MAX_LEN_STR 100
void Factory::AddObject() {
	cout << "--------------------------------------\n";
	cout << "Select object type:\n";
	cout << "1. Symbolic string" << endl;
	cout << "2. Octal string" << endl;
	int item = Menu::SelectItem(2);
	string name;
	cout << "Enter object name: ";
	cin >> name; cin.get();
	cout << "Enter object value: ";
	char buf[MAX_LEN_STR];
	cin.getline(buf, MAX_LEN_STR);
	string value = buf;
	AString* pNewObj;
	switch (item) {
	case 1: pNewObj = new SymbString(name, value); break;
	case 2: if (!IsOctStrVal(value)) {
		cout << "Error!" << endl;
		return;
	}
		  pNewObj = new OctString(name, value); break;
	}
	pObj.push_back(pNewObj);
	cout << "Object added." << endl;
}
void Factory::DeleteObject() {
	int nItem = pObj.size();
	if (!nItem) {
		cout << "There are no objects." << endl; cin.get();
		return;
	}
	cout << "......................................\n";
	cout << "Delete one of the following Object:\n";
	for (int i = 0; i < nItem; ++i)
		cout << i + 1 << ". " << pObj[i]->GetName() << endl;
	int item = Menu::SelectItem(nItem);
	string objName = pObj[item - 1]->GetName();
	pObj.erase(pObj.begin() + item - 1);
	cout << "Object " << objName << " deleted." << endl;
	cin.get();
}