#pragma once

#include "../Integer/IntegerGenerator.h"
#include <string>
#include <sstream>
#include "GPA.h"

class GPAGenerator{
public:
    GPAGenerator();
    GPA* next();
};