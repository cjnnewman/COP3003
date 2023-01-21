#include <iostream>

int main() {
    while(true){
        int userChoice = 0;

        std::cout << "Do you want to quit? -1 = yes: ";
        std::cin >> userChoice;

        if (userChoice < 0) {
            break;
        }
    }

    return 0;
}
