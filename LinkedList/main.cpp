#include <iostream>
// #include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main()
{
    // Constructor
    LinkedList<int> *l1 = new LinkedList<int>();

    // pop_back()

    l1->push_back(10);
    l1->push_back(15);
    l1->push_back(20);
    l1->push_back(25);
    l1->push_back(30);
    l1->push_back(35);
    l1->push_back(40);
    l1->print();
    cout << "Size is " << l1->size() << endl;

    // insert()
    l1->insert(0, 0);
    l1->insert(5, 1);
    l1->print();
    cout << "Size is " << l1->size() << endl;

    // pop_back()
    l1->pop_back();
    l1->pop_back();
    l1->print();
    cout << "Size is " << l1->size() << endl;

    // remove()
    l1->remove(3);
    l1->remove(0);
    l1->print();
    cout << "Size is " << l1->size() << endl;

    // reverse
    l1->reverse();
    l1->print();
    cout << "Size is " << l1->size() << endl;
}
