//---------------------------------------------------------
// Date : Feb 1 2023
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Calculate average of 11 grades, dropping the lowest
// before calculation. Output the corresponding letter grade
// based on the rounded average.
// Version: 4
//---------------------------------------------------------
#include <iostream>
#include <array>
#include <cmath>
#include "gradefunctions.h"
#include <string>

using std::string;

struct Student {
    int gradeLevel {};
    string studentName {};
    double finalGrade {};
    char letterGrade {};
};

int main() {
    std::array<double, 11> grades;
    double lowestGrade;
    double userInput;
    double roundedAverage;
    Student student;

    student.studentName = getStudentName();
    student.gradeLevel = getGradeLevel();

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
    student.finalGrade = getAverage(grades);
    roundedAverage = student.finalGrade;

    student.letterGrade = getLetterGrade(roundedAverage);

    // formatting
    std::cout << "\n";

    std::cout << "Thank you " << student.studentName << ", your final grade for the semester is a " <<
    student.letterGrade << " at " << student.finalGrade << "%" << std::endl;

    quitGrading(0);

    return 0;
} // end main
