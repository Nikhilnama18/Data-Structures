#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <stdexcept>
using namespace std;

// Constructor
template <typename T>
LinkedList<T>::LinkedList() : len(0), head(nullptr) {}

// Push_Back an element and increase the len of the linkedlist
template <typename T>
void LinkedList<T>::push_back(T data)
{
    if (head == nullptr)
    {
        len = 1;
        head = new Node<T>(data);
        tail = head;
        return;
    }
    tail->next = new Node<T>(data);
    tail = tail->next;
    len += 1;
    return;
}

// Insert a Node at specific position based on 1-indexed
template <typename T>
void LinkedList<T>::insert(T data, int pos)
{
    try
    {
        if (pos > len)
            throw invalid_argument("LinkedList::insert() : pos is out of boundary");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    if (pos == 0 || head == nullptr)
    {
        Node<T> *temp = new Node<T>(data);
        temp->next = head;
        head = temp;
        len += 1;
        if (len == 1)
            tail = head;
        return;
    }
    else if (pos == len)
    {
        tail->next = new Node<T>(data);
        tail = tail->next;
        len += 1;
        return;
    }

    Node<T> *temp = head;
    while (pos > 1)
    {
        temp = temp->next;
        pos -= 1;
    }
    Node<T> *newNode = new Node<T>(data);
    newNode->next = temp->next;
    temp->next = newNode;
    len += 1;
    return;
}

// Remove a Node from the Last
template <typename T>
void LinkedList<T>::pop_back()
{
    try
    {
        if (len <= 0)
            throw out_of_range("LinkedList::pop_back(): LinkedList is empty/ Underflow");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    if (len == 1)
    {
        head = nullptr;
        tail = nullptr;
        len = 0;
        return;
    }

    Node<T> *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
    tail = temp;
    len -= 1;
    return;
}

// Remove  a Node at specific position based on 1-indexed
template <typename T>
void LinkedList<T>::remove(int pos)
{
    try
    {
        if (pos >= len || pos < 0)
            throw invalid_argument("LinkedList::remove() : pos is out of boundary");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    if (pos == 0)
    {
        head = head->next;
        len -= 1;
        return;
    }
    int k = pos;

    Node<T> *temp = head;
    while (k - 1 > 0)
    {
        temp = temp->next;
        k -= 1;
    }
    temp->next = temp->next->next;
    len -= 1;
    if (pos == len - 1)
        tail = temp;
    return;
}

template <typename T>
void LinkedList<T>::reverse()
{
    if (len == 0 || len == 1)
        return;
    Node<T> *prev = nullptr, *cur = head, *suc = head->next;
    tail = head;
    while (suc)
    {
        cur->next = prev;
        prev = cur;
        cur = suc;
        suc = suc->next;
    }
    cur->next = prev;
    head = cur;
    return;
}

template <typename T>
void LinkedList<T>::print()
{
    Node<T> *temp = head;

    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

template <typename T>
int LinkedList<T>::size()
{
    return len;
}