#pragma once

#include <string>
using namespace std;

class Date {
public:
    Date();
    Date(int, int, int);
    static Date Now() { return Date(); }
public:
    int year() { return _year; }
    int month() { return _month; }
    int day() { return _day; }
public:
    static bool isLeapYear(int year);
    string toString();
private:
    int _day;
    int _month;
    int _year;
};