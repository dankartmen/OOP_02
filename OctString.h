#pragma once
#include "AString.h"
const std::string alph = "01234567";
bool IsOctStrVal(std::string);
class OctString :
    public AString
{   
    public:
        OctString(std::string _name) : name(_name) {}
        OctString(std::string, std::string);
        const std::string& GetName() const { return name; }
        const std::string& GetVal() const { return val; }
        int GetSize() const { return val.size(); }
    private:
        std::string name, val;
};

