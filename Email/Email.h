#pragma once

#include <iostream>
#include <string>

using namespace std;

class Email{
private:
    string _email;

public:
    Email(string email);
    string toString();
};