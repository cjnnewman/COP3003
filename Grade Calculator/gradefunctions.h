#ifndef MAIN_CPP_GRADEFUNCTIONS_H
#define MAIN_CPP_GRADEFUNCTIONS_H

#include <iostream>
#include <string>
#include <array>
#include <cmath>

void quitGrading(int);
double getAverage(std::array<double, 11>);
double getGrade();
char getLetterGrade(double roundedAverage);
std::string getGradeLevel();
std::string getStudentName();

#endif //MAIN_CPP_GRADEFUNCTIONS_H
