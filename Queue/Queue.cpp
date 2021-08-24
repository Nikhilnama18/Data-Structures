#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "../Node.h"
using namespace std;

// Constructor
template <typename T>
Queue<T>::Queue() : len(0), head(nullptr), tail(nullptr) {}

// push an element into the queue
template <typename T>
void Queue<T>::push(T data)
{
    if (len == 0)
    {
        head = new Node<T>(data);
        tail = head;
        len = 1;
        return;
    }

    tail->next = new Node<T>(data);
    tail = tail->next;
    len += 1;
    return;
}

// pop /remove an element from queue
template <typename T>
void Queue<T>::pop()
{
    try
    {
        if (len == 0)
            throw out_of_range("Queue::pop: Queue is empty");

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
        return;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

// return current head value of the queue
template <typename T>
T Queue<T>::front()
{
    try
    {
        if (len == 0)
            throw out_of_range("Queue::front: Queue is empty");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return head->val;
}

// return current tail value
template <typename T>
T Queue<T>::back()
{
    try
    {
        if (len == 0)
            throw out_of_range("Queue::back: Queue is empty");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return tail->val;
}

// Size of the Queue
template <typename T>
int Queue<T>::size()
{
    return len;
}

// return wheather the queue is empty or not
template <typename T>
bool Queue<T>::isEmpty()
{
    return !len;
}

// clear the queue
template <typename T>
void Queue<T>::clear()
{
    head = nullptr;
    return;
}