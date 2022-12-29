#pragma once

#include "../Integer/IntegerGenerator.h"
#include "Address.h"
#include "FakeHouseNumber.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class AddressGenerator{
public:
    AddressGenerator();
    Address* next();
};