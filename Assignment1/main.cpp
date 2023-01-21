//---------------------------------------------------------
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Simple program to determine whether an event falls
// on a weekday or weekend day.
//---------------------------------------------------------
#include <iostream>

int main() {
    int currentDay;
    int daysToEvent;
    int eventDay;

    // Get current day of week from user
    std::cout << "What day of the week is it? (1 for Monday, 7 for"
                 " Sunday): ";
    std::cin >> currentDay;

    // Find out how many days until event
    std::cout << "How many days until your event?: ";
    std::cin >> daysToEvent;

    // Calculate which weekday the event is using modulus division
    eventDay = (daysToEvent + currentDay) % 7;

    /*
    switch (eventDay) {
        case 0:
        case 5:
        case 6:
            std::cout << "Great! Enjoy your fun weekend!" << std::endl;
            break;
        default:
            std::cout << "Oh, workday. Work is better with friends at "
                         "least." << std::endl;
            break;
    }
    */


    // If the event falls on 5, 6, or 0 (Sunday), a weekend day, output "enjoy"
    // Otherwise, output "workday"
    if (eventDay == 5 || eventDay == 6 || eventDay == 0) {
        std::cout << "Great! Enjoy your fun weekend!" << std::endl;
    }
    else {
        std::cout << "Oh, workday. Work is better with friends at "
                     "least." << std::endl;
    }


    return 0;
}
