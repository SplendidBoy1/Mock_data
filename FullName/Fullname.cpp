#include "Fullname.h"

Fullname :: Fullname(string lastname, string middlename, string firstname){
    this -> _lastname = lastname;
    this -> _middlename = middlename;
    this -> _firstname = firstname;
}

Fullname :: ~Fullname(){
    delete [] this;
}

string Fullname :: toString(){
    string result;
    stringstream build;
    build << this -> _lastname << " " << this -> _middlename << " " << this -> _firstname;
    result = build.str();
    return result;
}