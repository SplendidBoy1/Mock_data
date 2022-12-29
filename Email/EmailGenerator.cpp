#include "EmailGenerator.h"

EmailGenerator :: EmailGenerator(){
}

Email* EmailGenerator :: next(string fullname){
    auto intGen = IntegerGenerator::instance();
    stringstream build;
    vector<string> tokens = Utils::String::split(fullname, " ");
    build << (char)tolower(tokens[0][0]) << (char)tolower(tokens[1][0]);
    for (int i = 0; i < tokens[2].size(); i++){
        build << (char)tolower(tokens[2].at(i));
    }
    build << "@";
    vector<string> companies = {"apple", "gmail", "yahoo", "facebook", "github", "twitter", "microsoft"};
    int company = intGen ->next() % companies.size();
    build << companies[company] << ".com";
    string email = build.str();
    auto result = new Email(email);
    return result;
}