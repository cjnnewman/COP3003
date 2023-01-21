//---------------------------------------------------------
// Date : Jan 21 2023
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Calculate average of 11 grades, dropping the lowest
// before calculation. Output the corresponding letter grade
// based on the rounded average.
//---------------------------------------------------------
#include <iostream>
#include <cmath>

// Namespaces
//---------------------------------------------------------
using std::trunc;

// Function Declaration (Prototypes)
//---------------------------------------------------------
double calculateTotal(double grades[]);
double calculateRoundedAverage(double gradesTotal);
void printGrades(double grades[]);
void printLetterGrade(double roundedAverage);

// Function Definitions
//---------------------------------------------------------
int main() {
    // variables
    double gradeInput;
    double grades[11];
    double lowestGrade = 100;
    double roundedAverage;
    double gradesTotal;
    double placeholder;

    // Get 11 grades input from user, populate array grades[]
    for (int i = 0; i < 11; i++) {
        std::cout << "Please enter 11 numeric grades, one at a time: ";
        std::cin >> gradeInput;

        // Validation: If grade input is not between 0 and 100, re-enter.
        while (gradeInput < 0 || gradeInput > 100) {
            std::cout << "Please enter a valid grade between 0 and 100: ";
            std::cin >> gradeInput;
        }
        // Input grade into array grades[]
        grades[i] = gradeInput;

    }

    // Sort array finding the lowest grade, move grade into grades[0] for easier
    // printing of array later
    for (int i = 0; i < 11; i++) {
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
            placeholder = grades[0];
            grades[0] = grades[i];
            grades[i] = placeholder;
        }
    }
    // Notify user of the lowest grade being dropped
    std::cout << "Lowest grade: " << lowestGrade << " dropped." << std::endl;

    gradesTotal = calculateTotal(grades);

    printGrades(grades);

    roundedAverage = calculateRoundedAverage(gradesTotal);

    printLetterGrade(roundedAverage);

    return 0;
}

/**
 * Calculate total of grades, excluding lowest grade
 * @param grades[] - array of grades
 * @return - the total of all grades, excluding lowest
 */
double calculateTotal(double grades[]) {
    double gradesTotal = 0;

    for (int i = 1; i < 11; i++) {
        gradesTotal += grades[i];
    }
    std::cout << gradesTotal << std::endl;
    return gradesTotal;
} // end calculateTotal

/**
 * Calculate the average of grades, excluding lowest and round (trunc)
 * @param gradesTotal - total of all grades, excluding lowest
 * @return - the rounded average of grades, excluding lowest
 */
double calculateRoundedAverage(double gradesTotal) {
    double averagedGrade;
    double roundedAverage;

    averagedGrade = gradesTotal / 10;
    roundedAverage = trunc(averagedGrade);

    return roundedAverage;
} // end calculateRoundedAverage

/**
 * Iterate through the array to print grades, excluding grades[0] (lowest)
 * @param grades[] - array of grades
 */
void printGrades(double grades[]) {
    for (int i = 1; i < 11; i++) {
        std::cout << "Grade " << i << " was: " << trunc(grades[i]) << std::endl;
    }
} // end printGrades

/**
 * Print letter grade to console based on rounded average
 * @param roundedAverage - rounded average of grades, excluding lowest
 */
void printLetterGrade(double roundedAverage) {
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
} // end printLetterGrades


