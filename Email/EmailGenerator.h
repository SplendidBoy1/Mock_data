#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include "Email.h"
#include "../Utils/Utils.h"
#include "../Integer/IntegerGenerator.h"

using namespace std;

class EmailGenerator{
public:
    EmailGenerator();
    Email* next(string fullname);
};