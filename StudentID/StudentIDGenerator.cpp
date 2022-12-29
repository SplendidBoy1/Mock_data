#include "StudentIDGenerator.h"

using namespace std;

StudenIDGenerator :: StudenIDGenerator(){
}

string StudenIDGenerator :: next(int year){
    string result;
    auto intGen = IntegerGenerator::instance();
    year = intGen -> next((year + 18)%100, Date::Now().year() % 100);
    
    int major = intGen ->next(11, 17);
    result = next(year, major);
    return result;
}

string StudenIDGenerator :: next(int year, int major){
    stringstream builder;
    builder << setw(2) << setfill('0') << year;
    builder << major;
    auto random_num = IntegerGenerator :: instance();
    for (int i = 0; i < 4; i++){
        builder << random_num -> next() % 10;
    }
    string result = builder.str();
    return result;
}