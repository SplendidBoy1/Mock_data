#include "Address.h"

Address :: Address(FakeHouseNumber* number, string street, string ward, string district){
    this -> _number = number;
    this -> _street = street;
    this -> _ward = ward;
    this -> _district = district;
}

string Address :: toString(){
    stringstream build;
    build << this -> _number ->next() << ", " << this -> _street << " Street, " << this -> _ward << " Ward, " << this -> _district << ", " << this -> _city;
    string result;
    result = build.str();
    return result;
}