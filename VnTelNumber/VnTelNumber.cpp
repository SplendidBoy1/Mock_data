#include "VnTelNumber.h"

VnTelNumber :: VnTelNumber(string number){
    this -> _number = number;
}

string VnTelNumber :: toString(){
    string result;
    result = this -> _number;
    return result;
}