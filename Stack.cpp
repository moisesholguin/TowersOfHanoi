#include "Stack.h"
#include <iostream>
#include <cstdlib>

/* ***************************************************************** */
/*  Moises Holguin | mh38694                                         */
/*  October 14, 2013                                                 */
/*                                                                   */
/*  Stack.cpp                                                        */
/*                                                                   */
/* ***************************************************************** */

using namespace std;

Stack::Stack() {
    height = 0;
    head = 0;
};

Stack::~Stack() {
    while(!isEmpty())
        pop();
};

void Stack::push(int x) {
    Node *temp = new Node();
    (*temp).setValue(x);
    (*temp).setNext(head);
    head = temp;
    height++;
};

int Stack::pop() {
    if(isEmpty()) {
        cerr << "Attempting to pop an empty stack.";
        exit(1);
    }

    int value = (*head).getValue();
    Node *temp = (*head).getNext();
    delete head;
    head = temp;
    height--;

    return value;
};

int Stack::peek() {
    if(isEmpty()) {
        cerr << "Attempting to peek at an empty stack.";
        exit(1);
    }

    return (*head).getValue();
};

int Stack::getHeight() {
    return height;
};

bool Stack::isEmpty() {
    return height == 0;
};
