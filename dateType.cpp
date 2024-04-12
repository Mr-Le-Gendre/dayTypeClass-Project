// dateType.cpp
#include "dateType.h"
#include <iostream>

dateType::dateType(int month, int day, int year) {
    setDate(month, day, year);
}

void dateType::setDate(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

int dateType::getMonth() const {
    return month;
}

int dateType::getDay() const {
    return day;
}

int dateType::getYear() const {
    return year;
}

bool dateType::isLeapYear() const {
    // A year is a leap year if it is divisible by 4, but not by 100, unless it is also divisible by 400
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

void dateType::printDate() const {
    std::cout << month << "-" << day << "-" << year;
}

void dateType::addDays(int numDays) {
    day += numDays;
}
