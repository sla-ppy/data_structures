#include <iostream>

#include "lists.h"
#include "../util.h"

struct LinkedList{
    int data;
    struct LinkedList *next; // self-referencing pointer!
};

typedef struct LinkedList *node; // define node as pointer of data type struct LinkedList

node createNode() {
    node temp; // declare node
    temp = (node)malloc(sizeof(struct LinkedList)); // allocate memory using malloc()
    temp->next = nullptr; // make next point to null

    return temp;
}

node addNode(node head, int value) {
    node temp, p; // declare two nodes temp and p
    temp = createNode(); // createNode() will return a new node with data = value and next pointing to NULL
    temp->data = value; // add element's value to data part of node

    if (head == nullptr) {
        head = temp; // when linked list is empty
    }
    else {
        p = head; // assign head to p
        while (p->next != nullptr) {
            p = p->next; //traverse the list until p is the last node. the last node always points to null
        }
        p->next = temp; // point the previous last node to the new node created
    }
    return head;
}

void singlyLinkedList() {

    node head = new LinkedList();

    addNode(head, 1);
    addNode(head, 2);
    addNode(head, 3);

    node p;
    p = head;
    while (p != nullptr) {
        std::cout << p->data << "  ";
        std::cout << p->next << "  ";
        std::cout << "\n";
        p = p->next;
    }

    std::cout << '\n';

    toContinue();
}

