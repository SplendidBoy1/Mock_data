#include "IntegerGenerator.h"

IntegerGenerator :: IntegerGenerator(){
    srand(time(NULL));
}

shared_ptr<IntegerGenerator> IntegerGenerator :: instance(){
    if (IntegerGenerator :: _instance == NULL){
        auto temp = new IntegerGenerator();
        IntegerGenerator :: _instance = shared_ptr<IntegerGenerator>(temp);
    }
    return _instance;
}

int IntegerGenerator :: next(){
    return rand();
}

int IntegerGenerator :: next(int first, int end){
    int result = rand() % (end - first + 1) + first;
    return result;
}