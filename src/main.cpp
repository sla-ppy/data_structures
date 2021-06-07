#include <iostream>
#include <limits>

#include "lists.h"

int main() {
    char menuChoice{};

    bool isInMenu{true};

    while (isInMenu) {
        std::cout << "1. Single Linked List" << std::endl;
        std::cout << "2. Stuff" << std::endl;
        std::cout << '\n';
        std::cout << "3. Exit" << std::endl;

        std::cin >> menuChoice;

        if (menuChoice == '1') {
            singleLinkedList();
        }
        else if (menuChoice == '2') {
            // stuff
        }
        else if (menuChoice == '3') {
            isInMenu = false;
        }
        else {
            std::cout << " Please choose a correct option from above." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}