#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Fullname{
private:
    string _firstname;
    string _middlename;
    string _lastname;
public:
    ~Fullname();
    Fullname(string lastname, string middlename, string firstname);
    string toString();
};
