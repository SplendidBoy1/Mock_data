#include "FakeHouseNumber.h"

FakeHouseNumber :: FakeHouseNumber(){
}

string FakeHouseNumber :: next(){
    stringstream build;
    auto intGen = IntegerGenerator::instance();
    int num_lane = intGen -> next(0, 2);
    build << intGen -> next(1, 999);
    while(num_lane != 0){
        if (num_lane > 0){
            build << "/";
            build << intGen -> next(1, 999);
            num_lane --;
        }
    }
    string result = build.str();
    return result;
}