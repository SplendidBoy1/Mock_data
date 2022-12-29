#pragma once

#include <iostream>
#include <string>

using namespace std;

class VnTelNumber{
private:
    string _number;

public:
    VnTelNumber(string number);
    string toString();
};