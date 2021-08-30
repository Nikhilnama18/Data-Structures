#ifndef HEAP_H
#define HEAP_H
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Heap
{
private:
    int n;
    vector<T> heap;

public:
    Heap();
    void push(T data);
    void pop();
    T top();
    int size();
    void clear();
};

#endif