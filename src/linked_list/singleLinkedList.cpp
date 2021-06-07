#include <iostream>

#include "lists.h"
#include "../util.h"

void singleLinkedList() {
    struct Node {
        // each node has a value, and the nextPtr which points at the next value
        int value{0};
        Node *nextPtr{};
    };

    // declare and allocate the nodes on heap
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;


    // define 1st - 5th nodes
    head->value = 1;
    head->nextPtr = second;

    second->value = 2;
    second->nextPtr = third;

    third->value = 3;
    // last node is called the "tail", its ALWAYS a good idea to point the last item on the list to the nullptr
    third->nextPtr = nullptr;


    Node* p = head;
    // loop until we hit the tail
    while (p != nullptr) {
        if (p == head) {
            std::cout << "Value: " << p->value << "    ";
            std::cout << "Address: " << p->nextPtr << "    <--- HEAD";
            std::cout << '\n';
        }
        else if (p->nextPtr == nullptr) {
            std::cout << "Value: " << p->value << "    ";
            std::cout << "Address: " << p->nextPtr << "                 <--- TAIL";
            std::cout << '\n';
        }
        else {
            std::cout << "Value: " << p->value << "    ";
            std::cout << "Address: " << p->nextPtr;
            std::cout << '\n';
        }

        p = p->nextPtr;
    }


    // deallocate nodes
    delete head;
    delete second;
    delete third;

    toContinue();
}

