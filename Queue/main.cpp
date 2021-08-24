#include <iostream>
#include "Queue.cpp"
using namespace std;
int main()
{
    // Constructor
    Queue<int> *qu = new Queue<int>();

    // push
    qu->push(10);
    qu->push(20);
    qu->push(30);
    qu->push(40);
    qu->push(50);
    // size
    cout << "Size is " << qu->size() << endl;

    // pop
    qu->pop();
    cout << "Size is " << qu->size() << endl;

    // front
    cout << "Front is " << qu->front() << endl;

    qu->push(100);
    // back
    cout << "Back is " << qu->back() << endl;

    // isEmpty
    cout << "isEmpty " << qu->isEmpty() << endl;

    // clear
    qu->clear();

    cout << "Size is " << qu->size() << endl;
}