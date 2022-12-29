#pragma once

#include "MajorEnum.h"
#include "../Integer/IntegerGenerator.h"
#include "../Birthday/Date.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

class StudenIDGenerator{
public:
    StudenIDGenerator();
    string next(int year);
    string next(int year, int major);
};
