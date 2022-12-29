#pragma once

#include "FakeHouseNumber.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Address{
private:
    FakeHouseNumber* _number;
    string _street;
    string _ward;
    string _district;
    const string _city = "Ho Chi Minh City";
public:
    Address(FakeHouseNumber* number, string street, string ward, string district);
    string toString();
};