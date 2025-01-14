#pragma once
#include "Action.h"
class ShowStr :
    public Action
{
    public:
        ShowStr() : name("Show string value") {}
        void Operate(AString*);
        void Operate(AString*, AString*) {};
        const std::string& GetName() const { return name; }
    private:
        std::string name; // обозначение операции
    
};
extern ShowStr show_str;

