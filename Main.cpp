#include <iostream>
#include "AString.h"
#include "SymbString.h"
#include "OctString.h"
#include "Action.h"
#include "ShowStr.h"
#include "ShowDec.h"
#include "Factory.h"
#include "Menu.h"
#include "AddStr.h"
#include "AddOct.h"

using namespace std;
Action* pActs[] = { &show_str, &show_dec, &add_str, &add_oct};
vector<Action*> actionList(pActs, pActs + sizeof(pActs) / sizeof(Action*));
int main() {
	Factory factory;
	Menu menu(actionList);
	JobMode jobMode;
	while ((jobMode = menu.SelectJob()) != Exit) {
		switch (jobMode) {
		case AddObj: factory.AddObject(); break;
		case DelObj: factory.DeleteObject(); break;
		case WorkWithObj:
			AString* pObj = menu.SelectObject(factory);
			Action* pAct = menu.SelectAction(pObj);
			if (pAct) {
				if (pAct->GetName() == "Operation '+' for 2 string value") { // Нужно как-то различать действия для показа и сложения строк
					AString* pObj1 = menu.SelectObject(factory);			 // Для этого решил использовать имя дейсвия (обозначение операции)
					pAct->Operate(pObj, pObj1); 
				}
				else if (pAct->GetName() == "Operation '+' for 2 oct value") {
					AString* pObj1 = menu.SelectObject(factory);
					pAct->Operate(pObj, pObj1);
				}
				else {
					pAct->Operate(pObj); break;
				}
			}
		}
		cin.get();
	}
	cout << "Bye!\n";
}