// circular singly linked list, where the tail points to the head thus creating a loop

#include <iostream>

#include "lists.h"

void circularSinglyLinkedList() {
    struct Node {
        int value{};
        Node *nextPtr{nullptr};
    };

    // allocate nodes
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;

    // assign values to nodes
    head->value = 1;
    head->nextPtr = second;

    second->value = 2;
    second->nextPtr = third;

    // circularity comes from this line, since the last link will result in a loop through the list, which lasts forever if we iterate through
    third->value = 3;
    third->nextPtr = head;

    int itCounter{0};

    // loop through the nodes displaying them
    Node *n = head;
    while (n != nullptr) {
        itCounter++;

        std::cout << n << std::endl;

        n = n->nextPtr;

        if (itCounter == 15) {
            n = nullptr;
        }
    }

    // deallocate nodes
    delete head;
    delete second;
    delete third;
    delete n;

    // simple "screen clear"
    for (int i = 0; i < 11; ++i) {
        std::cout << '\n';
    }
}