//---------------------------------------------------------
// File : main.cpp
// Class: COP 3003, Spring 2023
// Devel: Caleb Newman
// Desc : Simple program to display menu options at a deli
// and get a customers order.
// Version: 0.1
//---------------------------------------------------------
#include <iostream>
#include <array>
#include <locale>
#include <iomanip>

int getChoice();
int getTotal(std::array<int,5>, int userChoice);

int main() {
    const std::array<int,5> SANDWICH_PRICES = {0,1199,1099,899,899};
    int userChoice;
    int total;
    double userPayment;
    int internalPayment;

    userChoice = getChoice();
    total = getTotal(SANDWICH_PRICES, userChoice);

    std::cout << std::fixed << std::setprecision(2) <<  "Your total with tax is: $" << (double)total / 100 << "\n";
    std::cout << "Please enter payment amount: ";
    std::cin >> userPayment;

    internalPayment = userPayment * 100;

    std::cout << "$" << (double)(internalPayment-total)/100 << " is your change.";

    return 0;
}

int getChoice(){
    int userChoice;

    std::cout << "Menu: \n\n"
              << "\t0. No Sandwich \t\t $0\n"
              << "\t1. Meatball \t\t $11.99\n"
              << "\t2. Chicken Tender \t 10.99\n"
              << "\t3. Ham \t\t\t\t 8.99\n"
              << "\t4. Tuna \t\t\t 8.99\n\n";
    std::cout << "Please enter your choice: ";
    std::cin >> userChoice;

    return userChoice;

}

int getTotal(std::array<int,5> sandwichMenu, int userChoice) {
    int total = ((sandwichMenu[userChoice] * 0.06) + sandwichMenu[userChoice]);

    return total;
}

