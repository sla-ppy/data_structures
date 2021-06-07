#include <iostream>
#include <limits>

#include "linked_list/lists.h"

int main() {
    char menuChoice{};

    bool isInMenu{true};

    while (isInMenu) {
        std::cout << "1. Singly Linked List" << std::endl;
        std::cout << "2. Doubly Linked List" << std::endl;
        std::cout << "3. Circular Singly Linked List" << std::endl;
        std::cout << '\n';
        std::cout << "4. Exit" << std::endl;

        std::cin >> menuChoice;
        std::cout << '\n';

        if (menuChoice == '1') {
            singlyLinkedList();
        }
        else if (menuChoice == '2') {
            doublyLinkedList();
        }
        else if (menuChoice == '3') {
            circularSinglyLinkedList();
        }
        else if (menuChoice == '4') {
            isInMenu = false;
        }
        else {
            std::cout << " Please choose a correct option from above." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}