#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "VnTelNumber.h"
#include "../Integer/IntegerGenerator.h"

using namespace std;

class VnTelNumberGenerator{
public:
    VnTelNumberGenerator();
    VnTelNumber* next();
};