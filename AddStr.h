#pragma once
#include "Action.h"
class AddStr :
    public Action
{
    public:
        AddStr() : name("Operation '+' for 2 string value") {}
        void Operate(AString*) {};
        void Operate(AString*, AString*);
        const std::string& GetName() const { return name; }
    private:
        std::string name; // обозначение операции
};

extern AddStr add_str;