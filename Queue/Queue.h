#ifndef QUEUE_H
#define QUEUE_H

#include "../Node.h"

template <typename T>
class Queue
{
private:
    int len;
    Node<T> *head, *tail;

public:
    Queue();
    void push(T data);
    void pop();
    T front();
    T back();
    int size();
    bool isEmpty();
    void clear();
};

#endif