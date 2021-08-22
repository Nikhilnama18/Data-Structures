#ifndef NODE_H
#define NODE_H
template <typename T>
class Node
{
public:
    T val;
    Node *next;
    Node();
    Node(T data);
};

template <typename T>
Node<T>::Node() : val(), next(nullptr) {}
template <typename T>
Node<T>::Node(T data) : val(data), next(nullptr) {}
#endif