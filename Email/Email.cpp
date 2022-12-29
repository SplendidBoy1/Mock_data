#include "Email.h"

Email::Email(string email){
    this ->_email = email;
}

string Email::toString(){
    string result;
    result = this ->_email;
    return result;
}