// linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

template <typename T>
class LinkedList
{
private:
    int len;
    Node<T> *head;
    Node<T> *tail;

public:
    LinkedList();
    void push_back(T data);
    void insert(T data, int pos);
    void pop_back();
    void remove(int pos);
    void reverse();
    void print();
    int size();
};
#endif // linkelist.h