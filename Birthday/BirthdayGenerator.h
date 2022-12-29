#pragma once
#include "Date.h"
#include "../Integer/IntegerGenerator.h"

class BirthdayGenerator {
public:
    Date next();
    Date next(int year);
};