#include "LinkedList.h"
#include "Node.h"
#include <iostream>
using namespace std;
template <typename T>
LinkedList<T>::LinkedList() : len(0), head(nullptr) {}
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
    Node<T> *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new Node<T>(data);
    tail = temp->next;
    len += 1;
}
template <typename T>
int LinkedList<T>::size()
{
    return len;
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
