#include <iostream>
#include <array>

int main() {
    // Arrays
    std::array<int, 10> drinkChoices;

    // Variables
    const int GOAL = 8;
    int hydration = 0;
    int userChoice;
    char userInputContinue = 'y';
    int counter = 0;
    int finished = 0;

    while (counter < 3) {
        std::cout << "Select your drink from the list below. \n" << "\t 1. Macchiato \n" << "\t 2. Coffee/Soda/Tea \n"
                  <<
                  "\t 3. Milk \n" << "\t 4. Water \n\n" << "Enter your choice: \n Counter: " << counter;
        std::cin >> userChoice;

        if (counter < 3) {
            drinkChoices[counter] = userChoice;
            counter++;
        }

        std::cout << "Are you finished adding drinks? -1 = finished: ";
        std::cin >> finished;

        if (finished) {
            break;
        }
    }
    /*
        switch (choice) {
            case 1:
                hydration += 0;
                break;
            case 2:
                hydration += 1;
                break;
            case 3:
                hydration += 2;
                break;
            case 4:
                hydration += 3;
                break;
            default:
                std::cout << "Please select a valid menu option." << std::endl;
                break;
    }
    */

    return 0;
}
