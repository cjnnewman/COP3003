//---------------------------------------------------------
// Date : Feb 1 2023
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Calculate average of 11 grades, dropping the lowest
// before calculation. Output the corresponding letter grade
// based on the rounded average.
// Version: 3
//---------------------------------------------------------
#include <iostream>
#include <array>
#include <cmath>

double getAverage(std::array<double, 11>);
double getGrade();
void quitGrading(int);

int main() {
    std::array<double, 11> grades;
    double lowestGrade;
    double userInput;
    double roundedAverage;

    // Iterate 11 times to fill array by calling getGrade()
    for (int i = 0; i < grades.size(); i++) {
        grades[i] = getGrade();

    }

    // Sort the grades from lowest to highest so in order to
    // drop the lowest in index 0.
    std::sort(grades.begin(), grades.end());

    // Output rounded grades to console
    std::cout << "\n\tRounded Grades: \n";
    for (int i = 1; i < grades.size(); i++) {
        std::cout << "\t\tGrade " << (i) << " was: " << trunc(grades[i]) << "\n";
    }

    // Call getAverage() and pass the array of grades to calculate
    // the average.
    roundedAverage = getAverage(grades);

    // formatting
    std::cout << "\n";

    // Print letter grade to console based on rounded average.
    if (roundedAverage >= 90) {
        std::cout << "Your final grade is: A" << std::endl;
    }
    else if (roundedAverage >= 80) {
        std::cout << "Your final grade is: B" << std::endl;
    }
    else if (roundedAverage >= 70) {
        std::cout << "Your final grade is: C" << std::endl;
    }
    else if (roundedAverage >= 60) {
        std::cout << "Your final grade is: D" << std::endl;
    }
    else {
        std::cout << "Your final grade is: F :(" << std::endl;
    }

    quitGrading(0);

    return 0;
} // end main

/**
 * Function to get each grade from the user and validate.
 * @return - validated user input
 */
double getGrade() {
    std::string userContinue;
    double userInput;

    std::cout << "Would you like to continue entering grades? (y for yes, n for no): ";
    std::cin >> userContinue;

    if (std::toupper(userContinue[0]) == 'Y') {
        std::cout << "Please enter a grade: ";
        std::cin >> userInput;

        while (userInput > 100 || userInput < 0 || std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Invalid input, please enter a value between 0 and 100: ";
            std::cin >> userInput;
        }

        return userInput;
    }

    quitGrading(1);
} // end getGrade()

/**
 * Function to calculate average of grades from passed array.
 * @return - average of grades, rounded.
 */
double getAverage(std::array<double, 11> grades) {
    double total;
    double roundedAverage;

    for (int i = 0; i < grades.size(); i++) {
        total += grades[i];
    }

    roundedAverage = trunc(total/grades.size());

    return roundedAverage;
} // end getAverage

/**
 * Handles user quits, errors, and end of program.
 * @param quitReason - Reason the quit is initiated.
 */
void quitGrading(int quitReason){

    switch(quitReason) {
        case 0:
            std::cout << "Thank you for using our product!" << std::endl;
            exit(0);
        case 1:
            std::cout << "We're sorry you had to quit early. Thanks for using our product!" <<
                  std::endl;
            exit(0);
        case -1:
            std::cout << "An error occurred, please try again." << std::endl;
            exit(0);
    }
} // end quitGrading
