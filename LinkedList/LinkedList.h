// linkedlist.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

template <typename T>
class LinkedList
{
private:
    int len;

public:
    Node<T> *head;
    Node<T> *tail;
    LinkedList();
    // linkedlist(T x);
    void push_back(T data);
    void insert(int pos);
    void pop_back();
    void remove(int pos);
    void reverse();
    void print();
    int size();
};
// template <typename T>
// LinkedList<T>::LinkedList() : len(0), head(nullptr) {}

// template <typename T>
// linkedlist<T>::linkedlist(T x) : size(0), val(0), next(nullptr) {}

#endif // linkelist.h