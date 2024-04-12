// dayType Class Project.cpp
#include "dateType.h"
#include <iostream>

int main() {
    dateType date(1, 1, 1900);  // Initialize a date object with 1/1/1900

    // Print the initial date
    std::cout << "The date is: ";
    date.printDate();
    std::cout << "\n";

    // Test the getter functions
    std::cout << "Month: " << date.getMonth() << "\n";
    std::cout << "Day: " << date.getDay() << "\n";
    std::cout << "Year: " << date.getYear() << "\n";

    // Test the leap year function
    std::cout << "Is it a leap year? " << (date.isLeapYear() ? "Yes" : "No") << "\n";

    // Test the addDays function
    date.addDays(10);
    std::cout << "After adding 10 days, the date is: ";
    date.printDate();
    std::cout << "\n";

    return 0;
}
