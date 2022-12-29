#include "GPA.h"

GPA :: GPA(string gpa){
    this ->_gpa = gpa;
}

string GPA :: toString(){
    stringstream result;
    result << this ->_gpa;
    return result.str();
}