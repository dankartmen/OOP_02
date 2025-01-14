#pragma once
#include "AString.h"
class Action {
public:
	virtual ~Action() {}
	virtual void Operate(AString*) = 0;
	virtual void Operate(AString*, AString*) = 0;
	virtual const std::string& GetName() const = 0;
protected:
	long GetDecimal(AString* pObj) const; // переводит из восьмеричной системы в десятичную 
	//std::string DecimalToOctal(long decimal);
};

