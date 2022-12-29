#include "StudentFactory.h"

StudentFactory::StudentFactory(){
    StudenIDGenerator idGen;
    VnFullnameGenerator nameGen;
    AddressGenerator addGen;
    VnTelNumberGenerator telGen;
    BirthdayGenerator birthGen;
    EmailGenerator emailGen;
    GPAGenerator gpaGen;

    auto fullname = nameGen.next();
    auto address = addGen.next();
    auto telnum = telGen.next();
    auto birth_day = birthGen.next();
    auto id = idGen.next(birth_day.year());
    auto email = emailGen.next(fullname -> toString());
    auto gpa = gpaGen.next();
    stringstream build;
    build << "MSSV: " << id << " " << "Fullname: " << fullname ->toString() << " " << "Address: " << address -> toString() << " " << "Telnum: " << telnum -> toString() << " " << "Birth: " << birth_day.toString() << " " << "Email: " << email ->toString() << " " << "GPA: " << gpa ->toString() << endl;
    this ->_data = build.str();
}

string StudentFactory::ToString(){
    return this ->_data;
}