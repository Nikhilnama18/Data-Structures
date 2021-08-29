#ifndef BST_H
#define BST_H

#include "../TreeNode.h"
#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BST
{
private:
    int nodes;
    TreeNode<T> *root;

public:
    BST();
    void insert(T data);
    void preorder();
    void inorder();
    void postorder();
    TreeNode<T> *getRoot();
    int getNodeCount();
    int getHeight();
    void clear();
};

#endif