//---------------------------------------------------------
// Date : Feb 27 2023
// File : student.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : This .cpp file contains the Student class, which
// holds student information such as name, etc..
// Version: 6
//---------------------------------------------------------
#include <string>
#include <iostream>

class Student{
public:
    std::string studentName;
    std::string gradeLevel;
    std::string major;

    Student() {
        this->gradeLevel = "Sophomore";
        this->major = "Computer Science";
    }

    Student(std::string studentName, std::string gradeLevel, std::string major){
        this->studentName = studentName;
        this->gradeLevel = gradeLevel;
        this->major = major;
    }

    void printStudentInfo(){
        std::cout << "Name: " << this->studentName << "\n";
        std::cout << "\t Grade Level: " << this->gradeLevel << "\n";
        std::cout << "\t Major: " << this->major << "\n";
    }

    void setStudentName() {
        std::string studentNameInput;

        std::cout << "Please enter your full name: ";
        getline(std::cin, studentNameInput);
        this->studentName = studentNameInput;
    }

    void updateStudentInfo(){
        std::string gradeLevelInput;
        std::string majorInput;

        std::cout << "Please enter your grade level: ";
        std::cin >> std::ws;
        getline(std::cin, gradeLevelInput);
        std::cout << "Please enter your major: ";
        getline(std::cin, majorInput);

        this->gradeLevel = gradeLevelInput;
        this->major = majorInput;
    }

private:
};
