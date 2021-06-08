#include <iostream>
#include <limits>

#include "../linked_list/implementation/lists.h"

int main() {
    char menuChoice{};

    bool isInMenu{true};

    // simple menu for navigating
    while (isInMenu) {
        std::cout << "1. Singly Linked List" << std::endl;
        std::cout << "2. Doubly Linked List" << std::endl;
        std::cout << "3. Circular Singly Linked List" << std::endl;
        std::cout << "4. Linked List Practice Problems" << std::endl;
        std::cout << '\n';
        std::cout << "5. Exit" << std::endl;

        std::cin >> menuChoice;

        // new lines for simple "screen clear"
        for (int i = 0; i < 12; ++i) {
            std::cout << '\n';
        }

        if (menuChoice == '1') {
            singlyLinkedList();
        } else if (menuChoice == '2') {
            doublyLinkedList();
        } else if (menuChoice == '3') {
            circularSinglyLinkedList();
        } else if (menuChoice == '4') {
            linkedListPractice();
        } else if (menuChoice == '5') {
            isInMenu = false;
        } else {
            std::cout << " Please choose a correct option from above." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}