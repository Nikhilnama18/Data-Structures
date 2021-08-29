#include "../TreeNode.h"
#include "BST.cpp"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    BST<int> *tree = new BST<int>();

    // insert
    tree->insert(8);
    tree->insert(5);
    tree->insert(3);
    tree->insert(2);
    tree->insert(11);
    tree->insert(15);
    tree->insert(10);
    tree->insert(1);
    tree->insert(13);
    tree->insert(20);

    // preorder
    tree->preorder();

    //inorder
    tree->inorder();

    // postorder
    tree->postorder();

    // getRoot
    TreeNode<int> *root = tree->getRoot();

    // getNodeCount
    cout << "Number of Nodes in tree " << tree->getNodeCount() << endl;

    // getHeight
    cout << "Height of tree is " << tree->getHeight() << endl;

    // clear
    tree->clear();
}