#pragma once

#include "../Integer/IntegerGenerator.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class FakeHouseNumber{
public:
    FakeHouseNumber();
    string next();
};