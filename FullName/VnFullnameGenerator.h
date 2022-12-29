#pragma once


#include "Gender.h"
#include "../Integer/IntegerGenerator.h"
#include "Fullname.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class VnFullnameGenerator{
private:
    bool _selection = Gender :: Male;

public:
    VnFullnameGenerator();
    Fullname* next();
};