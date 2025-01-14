#pragma once
#include "Action.h"
class ShowDec : public Action {
public:
	ShowDec() : name("Show decimal value") {}
	void Operate(AString*);
	void Operate(AString*, AString*) {};
	const std::string& GetName() const { return name; }
private:
	std::string name; // обозначение операции
};
extern ShowDec show_dec;
