//---------------------------------------------------------
// Date : Feb 17 2023
// File : gradefunctions.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Logic .cpp file that contains all necessary functions
// for the Grade Calculator program.
// Version: 5
//---------------------------------------------------------
#include "gradefunctions.h"

std::array<double, 11> grades;

struct Student {
    std::string gradeLevel {};
    std::string studentName {};
    double finalGrade {};
    char letterGrade {};
} student;

// Function gets students full name
void getStudentName() {
    std::string studentName;

    std::cout << "Please enter your full name: ";
    getline(std::cin, studentName);
    student.studentName = studentName;

}

// Function to get students current grade level
void getGradeLevel() {
    std::string gradeLevel;

    std::cout << "Please enter your grade level: ";
    getline(std::cin, gradeLevel);
    student.gradeLevel = gradeLevel;

}

// Iterate 11 times to fill array by calling getGrade()
void fillArray() {
    for (int i = 0; i < grades.size(); i++) {
        grades[i] = getGrade();

    }
}

// Get grade input from user and data validation
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
    return 0;
} // end getGrade()

// Sort the grades from lowest to highest so in order to
// drop the lowest in index 0.
void sortArray() {
    std::sort(grades.begin(), grades.end());

}

// Output rounded grades to console
void printGrades() {
    std::cout << "\n\tRounded Grades: \n";
    for (int i = 1; i < grades.size(); i++) {
        std::cout << "\t\tGrade " << (i) << " was: " << trunc(grades[i]) << "\n";
    }
}

// Calculate average rounded grade and determine corresponding letter grade
void getAverageAndLetterGrade() {
    double total = 0;
    double roundedAverage;
    char letterGrade;

    for (int i = 0; i < grades.size(); i++) {
        total += grades[i];
    }

    roundedAverage = trunc(total/grades.size());

    student.finalGrade = roundedAverage;

    if (roundedAverage >= 90) {
        letterGrade = 'A';
    }
    else if (roundedAverage >= 80) {
        letterGrade = 'B';
    }
    else if (roundedAverage >= 70) {
        letterGrade = 'C';
    }
    else if (roundedAverage >= 60) {
        letterGrade = 'D';
    }
    else {
        letterGrade = 'F';
    }

    student.letterGrade = letterGrade;
} // end getAverage

// Print student name, final rounded grade and letter grade
void printStudentResults() {
    std::cout << "Thank you " << student.studentName << ", your final grade for the semester is a " <<
              student.letterGrade << " at " << student.finalGrade << "%" << std::endl;

}

// Handle errors, user early quit, and final "Thank you" message
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
