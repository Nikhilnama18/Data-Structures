#include "Heap.cpp"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // constructor
    Heap<int> *heap = new Heap<int>();

    // push
    heap->push(10);
    heap->push(3);
    heap->push(9);
    heap->push(14);
    heap->push(1);
    heap->push(7);
    heap->push(9);
    heap->push(2);
    heap->push(11);
    heap->push(100);

    // size
    cout << "Size is " << heap->size() << endl;
    while (heap->size())
    {
        // top
        cout << "Top is " << heap->top() << endl;

        // pop
        heap->pop();
    }

    // clear
    heap->clear();
}