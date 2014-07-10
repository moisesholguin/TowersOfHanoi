#ifndef STACK_H
#define STACK_H

/* ***************************************************************** */
/*  Moises Holguin | mh38694                                         */
/*  October 14, 2013                                                 */
/*                                                                   */
/*  Stack.h                                                          */
/*                                                                   */
/* ***************************************************************** */

class Node {
    public:
        Node() { value = 0; next = 0; }
        ~Node() {}

        int getValue() { return value; }
        Node *getNext() { return next; }

        void setValue(int x) { value = x; }
        void setNext(Node *n) { next = n; }

    private:
        int value;
        Node *next;
};

class Stack {
    public:
        Stack();
        ~Stack();

        void push(int x);
        int pop();
        int peek();
        int getHeight();
        bool isEmpty();

    private:
        int height;
        Node *head;
};

#endif
