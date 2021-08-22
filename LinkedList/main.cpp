#include <iostream>
// #include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main()
{
    LinkedList<int> *ll = new LinkedList<int>();

    ll->push_back(10);
    ll->push_back(10);
    ll->push_back(10);
    ll->push_back(11);

    cout << "Size is " << ll->size() << endl;
    cout << "Everything okay" << endl;
    ll->print();
}
