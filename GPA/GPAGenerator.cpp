#include "GPAGenerator.h"

GPAGenerator :: GPAGenerator(){

}

GPA* GPAGenerator:: next(){
    auto intGen = IntegerGenerator::instance();
    stringstream build;
    auto firstGPA = intGen->next()% 5;
    build << firstGPA;
    if (firstGPA == 4){
        build << ".0";
    }
    else{
        build << '.';
        build << intGen -> next(0, 99);
    }
    auto result = new GPA(build.str());
    return result;
}