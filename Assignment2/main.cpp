//---------------------------------------------------------
// Date : Jan 21 2023
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Calculate average of 11 grades, dropping the lowest
// before calculation. Output the corresponding letter grade
// based on the rounded average.
// Version: 2
//---------------------------------------------------------
#include <iostream>
#include <array>
#include <cmath>

int main() {
    std::array<double, 10> grades;
    double lowestGrade;
    double userInput;
    double gradesTotal = 0;
    double roundedAverage;

    // Prompt user for grades, assign first grade to the lowest grade.
    std::cout << "Please enter 11 numeric grades, one at a time: ";
    std::cin >> lowestGrade;

    // Data validation, if not 0-100 or non-number, ask for input again
    while (lowestGrade > 100 || lowestGrade < 0 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input, please enter a value between 0 and 100: ";
        std::cin >> lowestGrade;
    }

    // Iterate 10 times to fill array
    for (int i = 0; i < 10; i++) {
        std::cout << "Please enter 11 numeric grades, one at a time: ";
        std::cin >> userInput;

        // Data validation, if not 0-100 or non-number, ask for input again
        while (userInput > 100 || userInput < 0 || std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Invalid input, please enter a value between 0 and 100: ";
            std::cin >> userInput;
        }

        // If input is greater than current lowest grade, input to array
        // Otherwise, assign the former lowest grade to array and assign
        // new input to the lowest grade
        if (userInput >= lowestGrade) {
            grades[i] = userInput;
        }
        else {
            grades[i] = lowestGrade;
            lowestGrade = userInput;
        }
    }

    // Output rounded grades to console
    // Calculate total of grades in this loop as well
    std::cout << "\n\tRounded Grades: \n";
    for (int i = 0; i < 10; i++) {
        std::cout << "\t\tGrade " << (i+1) << " was: " << trunc(grades[i]) << "\n";
        gradesTotal += grades[i];
    }

    // Calculate the rounded average of grades
    roundedAverage = trunc(gradesTotal / 10);

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
}



