//---------------------------------------------------------
// Date : Feb 17 2023
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Grade calculator program, takes input of grades
// from a user and calculates an average grade and a letter
// grade.
// Version: 6
//---------------------------------------------------------
#include <iostream>
#include "gradeFunctions.cpp"
#include "student.cpp"

int main() {
    char userResponse;

    Student student1 = Student();
    GradeFunctions testStudent = GradeFunctions();

    student1.setStudentName();

    student1.printStudentInfo();
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
    testStudent.printStudentResults(student1.studentName);


    return 0;
} // end main