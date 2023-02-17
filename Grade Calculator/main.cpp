//---------------------------------------------------------
// Date : Feb 17 2023
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Calculate average of 11 grades, dropping the lowest
// before calculation. Output the corresponding letter grade
// based on the rounded average.
// Version: 5
//---------------------------------------------------------
#include <iostream>
#include "gradefunctions.h"

int main() {
    // Two fn to get student info
    getStudentName();
    getGradeLevel();

    // Prompt user for grades to fill the array
    fillArray();

    // Sort the array, leaving lowest in index [0]
    sortArray();

    // Print 10 grades, sorted, to console
    printGrades();

    // Get rounded average and assign letter grade
    getAverageAndLetterGrade();

    // formatting
    std::cout << "\n";

    // Output name, final letter grade and percentage
    printStudentResults();

    quitGrading(0);

    return 0;
} // end main