#include "dayType.h"
#include <iostream>

const std::string dayType::daysOfWeek[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

dayType::dayType() {
    day = "Sunday";
}

dayType::dayType(const std::string& day) {
    setDay(day);
}

void dayType::setDay(const std::string& day) {
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            this->day = day;
            return;
        }
    }
    this->day = "Sunday";  // Default value
}

void dayType::printDay() const {
    std::cout << day;
}

std::string dayType::getDay() const {
    return day;
}

std::string dayType::getNextDay() const {
    int idx = 0;
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            idx = i;
            break;
        }
    }
    return daysOfWeek[(idx + 1) % 7];
}

std::string dayType::getPrevDay() const {
    int idx = 0;
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            idx = i;
            break;
        }
    }
    return daysOfWeek[(idx + 6) % 7];
}

void dayType::addDays(int numDays) {
    int idx = 0;
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            idx = i;
            break;
        }
    }
    idx = (idx + numDays) % 7;
    if (idx < 0) idx += 7;
    day = daysOfWeek[idx];
}
