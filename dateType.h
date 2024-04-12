// dateType.h
#ifndef DATETYPE_H
#define DATETYPE_H

#include <string>

class dateType {
private:
    int month;
    int day;
    int year;

public:
    // Precondition: None
    // Postcondition: The dateType object is initialized to 1/1/1900
    dateType(int month = 1, int day = 1, int year = 1900);

    // Precondition: The input month must be between 1 and 12, the input day must be valid for the given month, and the input year must be >= 1900
    // Postcondition: The dateType object is initialized to the input date if valid, otherwise it is initialized to 1/1/1900
    void setDate(int month, int day, int year);

    // Precondition: None
    // Postcondition: The current month is returned
    int getMonth() const;

    // Precondition: None
    // Postcondition: The current day is returned
    int getDay() const;

    // Precondition: None
    // Postcondition: The current year is returned
    int getYear() const;

    // Precondition: None
    // Postcondition: Returns true if the current year is a leap year, false otherwise
    bool isLeapYear() const;

    // Precondition: None
    // Postcondition: Prints the date in the format mm-dd-yyyy
    void printDate() const;

    // Precondition: The input number of days must be a non-negative integer
    // Postcondition: The date is advanced by the input number of days
    void addDays(int numDays);
};

#endif /* DATETYPE_H */
