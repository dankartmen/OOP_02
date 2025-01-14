#pragma once
#include <vector>
#include "AString.h"
class Factory {
	friend class Menu;
public:
	Factory() {}
	void AddObject();
	void DeleteObject();
private:
	std::vector<AString*> pObj;
};

