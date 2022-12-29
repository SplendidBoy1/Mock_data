#pragma once

#include <iostream>
#include <memory>

using namespace std;

class IntegerGenerator{
private:
    inline static shared_ptr<IntegerGenerator> _instance = NULL;

    IntegerGenerator();
public:
    static shared_ptr<IntegerGenerator> instance();
    int next();
    int next(int first, int end);
};