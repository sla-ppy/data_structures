// a doubly linked list is nothing special, but a linked list which has a prevPtr that points to the previous node

#include <iostream>

void doublyLinkedList() {
    struct Node {
        Node *prevPtr{nullptr};
        int value{};
        Node *nextPtr{nullptr};
    };

    // declare and allocate nodes
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;
    Node *fifth = new Node;


    // define node values
    head->prevPtr = nullptr;
    head->value = 1;
    head->nextPtr = second;

    second->prevPtr = head;
    second->value = 2;
    second->nextPtr = third;

    third->prevPtr = second;
    third->value = 3;
    third->nextPtr = fourth;

    fourth->prevPtr = third;
    fourth->value = 4;
    fourth->nextPtr = fifth;

    fifth->prevPtr = fourth;
    fifth->value = 5;
    fifth->nextPtr = nullptr;


    Node *n = head;

    std::cout << "prev  value   address   next   \n";
    while (n != nullptr) {
        std::cout << n->prevPtr << "   ";
        std::cout << n->value << "   ";
        std::cout << n << "   ";
        std::cout << n->nextPtr << "   ";
        std::cout << '\n';
        n = n->nextPtr;
    }

    // deallocate nodes
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;
    delete n;

    // simple "screen clear"
    for (int i = 0; i < 11; ++i) {
        std::cout << '\n';
    }
}

