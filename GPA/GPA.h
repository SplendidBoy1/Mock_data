#pragma once

#include "../Integer/IntegerGenerator.h"
#include <sstream>
#include <string>

using namespace std;

class GPA{
private:
    string _gpa;
public:
    GPA(string gpa);
    string toString();
};