#pragma once
#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType {
private:
    std::string day;
    static const std::string daysOfWeek[];

public:
    // Precondition: None
    // Postcondition: The dayType object is initialized to "Sunday"
    dayType();

    // Precondition: The input string must be a valid day of the week
    // Postcondition: The dayType object is initialized to the input day if valid, otherwise it is initialized to "Sunday"
    dayType(const std::string& day);

    // Precondition: The input string must be a valid day of the week
    // Postcondition: The day of the dayType object is set to the input day if valid, otherwise it is set to "Sunday"
    void setDay(const std::string& day);

    void printDay() const;
    std::string getDay() const;
    std::string getNextDay() const;
    std::string getPrevDay() const;
    void addDays(int numDays);
};

#endif /* DAYTYPE_H */
