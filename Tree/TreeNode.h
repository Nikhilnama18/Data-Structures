#ifndef TREENODE_H
#define TREENODE_H

template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left, *right;

    TreeNode();
    TreeNode(T data);
};

template <typename T>
TreeNode<T>::TreeNode() : val(0), left(nullptr), right(nullptr) {}

template <typename T>
TreeNode<T>::TreeNode(T data) : val(data), left(nullptr), right(nullptr) {}

#endif