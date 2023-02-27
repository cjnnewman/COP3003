//---------------------------------------------------------
// Date : Feb 27 2023
// File : gradeFunctions.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : This .cpp file contains the GradeFunctions class.
// This class contains all the functions needed to fill the
// grades array, sort it, and perform calculations.
// Version: 6
//---------------------------------------------------------
#include <iostream>
#include <array>
#include <math.h>


class GradeFunctions {
private:

public:
    std::array<double, 11> grades;

    double finalGrade{};
    char studentLetterGrade{};

    GradeFunctions() {
    this->finalGrade = 0;
    this->studentLetterGrade = 'A';
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

        do {

            std::cout << "Please enter a grade, or -1 to quit: ";
            std::cin >> userInput;

            while (userInput > 100 || userInput < -1 || std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Invalid input, please enter a value between 0 and 100, or -1 to quit: ";
                std::cin >> userInput;
            }

            if(userInput == -1){
                quitGrading(1);
            }

            return userInput;

        } while(userInput > -2);

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
        double calculatedRoundedAverage;
        char letterGrade;

        for (int i = 0; i < grades.size(); i++) {
            total += grades[i];
        }

        calculatedRoundedAverage = trunc(total / grades.size());

        this->finalGrade = calculatedRoundedAverage;

        if (calculatedRoundedAverage >= 90) {
            letterGrade = 'A';
        } else if (calculatedRoundedAverage >= 80) {
            letterGrade = 'B';
        } else if (calculatedRoundedAverage >= 70) {
            letterGrade = 'C';
        } else if (calculatedRoundedAverage >= 60) {
            letterGrade = 'D';
        } else {
            letterGrade = 'F';
        }

        this->studentLetterGrade = letterGrade;
    } // end getAverage

// Print student name, final rounded grade and letter grade
    void printStudentResults(std::string studentName) {
        std::cout << "Thank you " << studentName << ", your final grade for the semester is a " <<
                  this->studentLetterGrade << " at " << this->finalGrade << "%" << std::endl;

    }

// Handle errors, user early quit, and final "Thank you" message
    void quitGrading(int quitReason) {

        switch (quitReason) {
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

};
