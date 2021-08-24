#ifndef STACK_H
#define STACK_H
#include "../Node.h"

template <typename T>
class Stack
{
private:
    int len;
    Node<T> *head;
    Node<T> *tail;

public:
    Stack();
    void push(T data);
    void pop();
    int top();
    int size();
    bool isEmpty();
    void clear();
};

#endif