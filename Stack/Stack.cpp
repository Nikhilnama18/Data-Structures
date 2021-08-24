#include "../Node.h"
#include "Stack.h"
#include <stdexcept>
#include <iostream>
using namespace std;

// Constructor
template <typename T>
Stack<T>::Stack() : len(0), head(nullptr){};

// Push an element into stack
template <typename T>
void Stack<T>::push(T data)
{
    if (head == nullptr)
    {
        head = new Node<T>(data);
        tail = head;
        len += 1;
        return;
    }

    tail->next = new Node<T>(data);
    tail = tail->next;
    len += 1;
    return;
}

// Remove an element from the last
template <typename T>
void Stack<T>::pop()
{
    try
    {
        if (len == 0)
            throw out_of_range("Stack::pop() : Underflow");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    if (len == 1)
    {
        head = nullptr;
        tail = head;
        len = 0;
        return;
    }

    Node<T> *temp = head;
    while (temp->next->next)
        temp = temp->next;
    temp->next = nullptr;
    tail = temp;
    len -= 1;
}

// Return Last Inserted Node's Value
template <typename T>
int Stack<T>::top()
{
    try
    {
        if (len == 0)
            throw out_of_range("Stack::top() : Stack is empty");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return tail->val;
}

// Return Number of elements present in the stack
template <typename T>
int Stack<T>::size()
{
    return len;
}

// Return true if stack is empty else false
template <typename T>
bool Stack<T>::isEmpty()
{
    return head == nullptr ? true : false;
}

// clear the stack
template <typename T>
void Stack<T>::clear()
{
    head = nullptr;
    tail = nullptr;
    len = 0;
}
