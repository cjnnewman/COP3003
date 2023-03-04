//---------------------------------------------------------
// Date : Mar 4 2023
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Grade calculator program, takes input of grades
// from a user and calculates an average grade and a letter
// grade.
// Version: 7
//---------------------------------------------------------
#include <iostream>
#include "gradeFunctions.cpp"
#include "student.cpp"

using std::string;
using std::cout;

int main() {
    char userResponse;
    string studentNameInput;

    GradeFunctions testStudent = GradeFunctions();
    cout << "-------------------------------------\n";
    cout << "\tWelcome to Grade Calculator!\n";
    cout << "\t Developed by Caleb Newman\n";
    cout << "\t\t   Version 7\n";
    cout << "-------------------------------------\n";
    cout << "Please enter your name: ";
    getline(std::cin, studentNameInput);

    Student student1 = Student(studentNameInput);

    student1.printStudentInfoPPrint();
    std::cout << "Is the above info correct? Y to continue, N to update: ";
    std::cin >> userResponse;
    if (std::toupper(userResponse) == 'N'){
        student1.updateStudentInfo();
        std::cout << "Thanks, info updated. Continuing ... \n\n";
    }
    else{
        std::cout << "Continuing ... \n\n";
    }

    testStudent.fillArray();
    testStudent.sortArray();
    testStudent.printGrades();
    testStudent.getAverageAndLetterGrade();
    student1.printStudentInfoPPrint();
    testStudent.printStudentResults(student1.studentName);


    return 0;
} // end main