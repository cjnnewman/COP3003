#include "gradefunctions.h"

std::string getStudentName() {
    std::string studentName;

    std::cout << "Please enter your full name: ";
    getline(std::cin, studentName);

    return studentName;
}

std::string getGradeLevel() {
    std::string gradeLevel;

    std::cout << "Please enter your grade level: ";
    getline(std::cin, gradeLevel);

    return gradeLevel;
}

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

double getAverage(std::array<double, 11> grades) {
    double total = 0;
    double roundedAverage;

    for (int i = 0; i < grades.size(); i++) {
        total += grades[i];
    }

    roundedAverage = trunc(total/grades.size());

    return roundedAverage;
} // end getAverage

char getLetterGrade(double roundedAverage) {
    char letterGrade;

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

    return letterGrade;
}

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
