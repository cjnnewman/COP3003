//---------------------------------------------------------
// Date : Mar 4 2023
// File : student.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : This .cpp file contains the Student class, which
// holds student information such as name, etc..
// Version: 7
//---------------------------------------------------------
#include <string>
#include <iostream>

using std::cout;
using std::cin;

class Student{
private:
    std::string gradeLevel;
    std::string major;

    bool validateGradeLevel(std::string &gradeLevelInput){
        std::string lowercaseGradeLevelInput = gradeLevelInput;
        int stringLength = lowercaseGradeLevelInput.length();
        for (int x = 0; x < stringLength; x++) {
            lowercaseGradeLevelInput[x] = std::tolower(lowercaseGradeLevelInput[x]);
        }

        if (lowercaseGradeLevelInput == "freshman"){
            return true;
        }
        else if (lowercaseGradeLevelInput == "sophomore"){
            return true;
        }
        else if (lowercaseGradeLevelInput == "junior"){
            return true;
        }
        else if (lowercaseGradeLevelInput == "senior"){
            return true;
        }
        else if (lowercaseGradeLevelInput == "9") {
            gradeLevelInput = convertGradeLevel(std::stoi(gradeLevelInput));
            return true;
        }
        else if (lowercaseGradeLevelInput == "10") {
            gradeLevelInput = convertGradeLevel(std::stoi(gradeLevelInput));
            return true;
        }
        else if (lowercaseGradeLevelInput == "11") {
            gradeLevelInput = convertGradeLevel(std::stoi(gradeLevelInput));
            return true;
        }
        else if (lowercaseGradeLevelInput == "12") {
            gradeLevelInput = convertGradeLevel(std::stoi(gradeLevelInput));
            return true;
        }
        else {
            cout << "\tProper format is: freshman, sophomore, junior, senior OR 9, 10, 11, 12 \n";
            cout << "\tPlease try again...\n";
            return false;
        }
        return false;
    }

    std::string convertGradeLevel(int numericGradeLevelInput) {
        std::string convertedGradeLevelString;

        switch (numericGradeLevelInput){
            case 9:
                convertedGradeLevelString = "Freshman";
                break;
            case 10:
                convertedGradeLevelString = "Sophomore";
                break;
            case 11:
                convertedGradeLevelString = "Junior";
                break;
            case 12:
                convertedGradeLevelString = "Senior";
                break;
        }
        return convertedGradeLevelString;
    }

public:
    std::string studentName;

    Student() {
        this->gradeLevel = "Sophomore";
        this->major = "Computer Science";
    }

    Student(std::string studentName){
        this->studentName = studentName;
        this->gradeLevel = "Sophomore";
        this->major = "Computer Science";

    }

    Student(std::string studentName, std::string gradeLevel, std::string major){
        this->studentName = studentName;
        this->gradeLevel = gradeLevel;
        this->major = major;
    }

    Student(std::string studentName, int gradeLevelNumeric, std::string major){
        this->studentName = studentName;
        this->gradeLevel = convertGradeLevel(gradeLevelNumeric);
        this->major = major;
    }

    void printStudentInfoPPrint(){
        cout << "----------------------------------------\n";
        cout << "Name: " << this->studentName << "\n";
        cout << "\t Grade Level: " << this->gradeLevel << "\n";
        cout << "\t Major: " << this->major << "\n";
        cout << "----------------------------------------\n";
    }

    std::string getStudentName() {
        std::string studentNameInput;

        cout << "Please enter your full name: ";
        getline(cin, studentNameInput);

        return studentNameInput;
    }

    void updateStudentInfo(){
        std::string gradeLevelInput;
        std::string majorInput;

        do {
            cout << "Please enter your grade level: ";
            cin >> std::ws;
            getline(cin, gradeLevelInput);
        }
        while (!(validateGradeLevel(gradeLevelInput)));
        cout << "Please enter your major: ";
        getline(cin, majorInput);

        this->gradeLevel = gradeLevelInput;
        this->major = majorInput;
    }
};
