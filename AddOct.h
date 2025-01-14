#pragma once
#include "Action.h"
class AddOct :
    public Action
{
    public:
        AddOct() : name("Operation '+' for 2 oct value") {}
        void Operate(AString*) {};
        void Operate(AString*, AString*);
        const std::string& GetName() const { return name; }
    private:
        std::string name; // обозначение операции
};

extern AddOct add_oct;