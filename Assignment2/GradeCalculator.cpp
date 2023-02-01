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

double getAverage(std::array<double, 10>);
double getGrade();
void quitGrading(int);

int main() {
    std::array<double, 10> grades;
    double lowestGrade;
    double userInput;
    double roundedAverage;

    // Iterate 11 times to fill array
    for (int i = 0; i <= grades.size(); i++) {
        grades[i] = getGrade();

    }

    std::sort(grades.begin(), grades.end());

    // Output rounded grades to console
    // Calculate total of grades in this loop as well
    std::cout << "\n\tRounded Grades: \n";
    for (int i = 1; i <= grades.size(); i++) {
        std::cout << "\t\tGrade " << (i+1) << " was: " << trunc(grades[i]) << "\n";
    }

    // Calculate the rounded average of grades
    // roundedAverage = trunc(gradesTotal / 10);
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

/*
Refactor our portion getting grades to a new function called: get_grade
Should take no parameters
Will ask the user if they want to continue entering grades
If not then pass 1 to quit_grading
Will then ask for their grade
Will validate the grade (is it between 0 and 100 when truncated)
If its valid it will return it
If its not it will run quit_grading with a -1
 */
double getGrade() {
    char userContinue;
    double userInput;

    std::cout << "Would you like to continue entering grades? (y for yes, n for no): ";
    std::cin >> userContinue;

    while (userContinue == 'y' || userContinue == 'Y') {
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

}
/*
Refactor average code to a function called get_average
After all grades gotten (all 10)
Call get_average passing the array as a parameter
return the average for the passed array
 */
double getAverage(std::array<double, 10> grades) {
    double total;
    double roundedAverage;

    for (int i = 0; i < grades.size(); i++) {
        total += grades[i];
    }

    roundedAverage = trunc(total/grades.size());

    return roundedAverage;
} // end getAverage

/*
Create a brand new function: quit_grading (or quitGrading) use the naming style that fits your code
Pass it a number (0, 1, -1) which it uses to determine why we are quitting
Default should print "Thank you for using our product!"
1 should print "Sorry you had to quit early. Thank you for using our product!"
-1 should print "An error occurred, please try again"
Should quit the program after printing message
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
