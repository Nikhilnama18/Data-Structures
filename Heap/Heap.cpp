#include "./Heap.h"
#include <bits/stdc++.h>
using namespace std;

// constructor
template <typename T>
Heap<T>::Heap() : n(-1) {}

// trickleup
template <typename T>
void trickleup(vector<T> &heap, int child)
{
    int parent = ((child + 1) / 2) - 1;
    if (parent >= 0 && heap[parent] < heap[child])
    {
        swap(heap[parent], heap[child]);
        trickleup(heap, parent);
    }
    return;
}

// push
template <typename T>
void Heap<T>::push(T data)
{
    if (n == -1)
    {
        heap.push_back(data);
        n += 1;
        return;
    }
    heap.push_back(data);
    n += 1;
    trickleup(heap, n);
}

// trickledown
template <typename T>
void trickledown(vector<T> &heap, int parent)
{
    int left = 2 * (parent) + 1;
    int right = 2 * (parent) + 2;
    if (left > heap.size() - 1)
        return;
    if (right > heap.size() - 1)
    {
        if (heap[left] > heap[parent])
        {
            swap(heap[left], heap[parent]);
        }
        return;
    }

    if (heap[left] >= heap[right] && heap[left] > heap[parent])
    {
        swap(heap[left], heap[parent]);
        trickledown(heap, left);
    }
    else if (heap[right] > heap[parent])
    {
        swap(heap[right], heap[parent]);
        trickledown(heap, right);
    }
    return;
}

// pop
template <typename T>
void Heap<T>::pop()
{
    try
    {
        if (n == -1)
            throw out_of_range("Heap<T>::pop: heap is empty");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    heap[0] = heap[n];
    n -= 1;
    heap.pop_back();
    trickledown(heap, 0);
}

// top()
template <typename T>
T Heap<T>::top()
{
    try
    {
        if (n == -1)
            throw out_of_range("Heap<T>::pop: heap is empty");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return heap[0];
}

// size
template <typename T>
int Heap<T>::size()
{
    return n + 1;
}

// clear
template <typename T>
void Heap<T>::clear()
{
    heap = vector<T>(0, 0);
    n = -1;
    return;
}