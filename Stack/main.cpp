#include "Stack.cpp"
#include <iostream>

using namespace std;
int main()
{
    // Constructor
    Stack<int> *s = new Stack<int>();

    // push()
    s->push(10);
    s->push(11);
    s->push(12);
    s->push(13);
    s->push(14);
    s->push(15);
    // top()
    cout << "Top is " << s->top() << endl;
    // size()
    cout << "Size is " << s->size() << endl;

    // pop()
    s->pop();
    s->pop();
    // top()
    cout << "Top is " << s->top() << endl;
    // size()
    cout << "Size is " << s->size() << endl;

    // isEmpty()
    cout << "IS empty " << s->isEmpty() << endl;

    // clear()
    s->clear();
    // size()
    cout << "Size is " << s->size() << endl;
}