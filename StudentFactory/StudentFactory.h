#pragma once

#include "../Address/AddressGenerator.h"
#include "../Birthday/BirthdayGenerator.h"
#include "../Birthday/Date.h"
#include "../Email/EmailGenerator.h"
#include "../Email/Email.h"
#include "../FullName/Fullname.h"

#include "../StudentID/StudentIDGenerator.h"
#include "../Fullname/VnFullnameGenerator.h"
#include "../Integer/IntegerGenerator.h"
#include "../VnTelNumber/VnTelNumberGenerator.h"
#include "../VnTelNumber/VnTelNumber.h"
#include "../GPA/GPAGenerator.h"
#include "../GPA/GPA.h"

using namespace std;

class StudentFactory{
private:
    string _data;
public:
    StudentFactory();
    string ToString();
};