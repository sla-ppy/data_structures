#include <iostream>

#include "../implementation/lists.h"

struct LinkedList {
    int data{};
    struct LinkedList *next{nullptr};
};

typedef struct LinkedList *node; // define node as pointer of data type struct LinkedList

// using a convention where i name the following functions used for the practice problems according to the number of problem in order so i can type out more code this way
node createNodeP1() {
    node temp;
    temp = (node) malloc(sizeof(struct LinkedList));
    temp->next = nullptr;

    return temp;
}

node addNodeP1(node head, int value) {
    node temp, p;
    temp = createNodeP1();
    temp->data = value;

    if (head == nullptr) {
        head = temp; // when list is empty
    } else {
        p = head;
        while (p->next != nullptr) {
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}

void linkedListPractice() {
    std::cout << "** 1. Write a program in C to create and display Singly Linked List **" << std::endl;

    // get number of nodes
    int numbOfNodes{};
    std::cout << "Input number of nodes:" << std::endl;
    std::cin >> numbOfNodes;

    node head = new LinkedList();

    // create nodes according to numbOfNodes
    int it{0};
    int inputValue{0};
    while (it != numbOfNodes) {
        it++;
        std::cout << "Input data for node " << it << ":";
        std::cin >>inputValue;
        addNodeP1(head,inputValue);
    }

    // loop through created nodes and display them
    node n;
    n = head;
    while (n != nullptr) {
        std::cout << "data:   " << n->data << "   ";
        std::cout << "next address:   " <<n->next;
        std::cout << '\n';
        n = n->next;
    }

    // simple "screen clear"
    for (int i = 0; i < 13; ++i) {
        std::cout << '\n';
    }
}