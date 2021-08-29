#ifndef COMPLETEBINARTTREE_H
#define COMPLETEBINARTTREE_H

#include "../TreeNode.h"

template <typename T>
class CompleteBinaryTree
{
private:
    TreeNode<T> *root;
    int nodes;
    // int height;

public:
    CompleteBinaryTree(/* args */);
    void insert(T data);
    void clear();
    const TreeNode<T> *getRoot();
    int getHeight();
    int getNodeCount();
};

#endif