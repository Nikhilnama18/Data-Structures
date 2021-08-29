#include <bits/stdc++.h>
#include "../TreeNode.h"
#include "CompleteBinaryTree.cpp"
using namespace std;
int main()
{
    CompleteBinaryTree<int> *Cbt = new CompleteBinaryTree<int>();

    // insert
    Cbt->insert(1);
    Cbt->insert(2);
    Cbt->insert(3);
    Cbt->insert(4);
    Cbt->insert(5);
    Cbt->insert(6);
    Cbt->insert(7);
    Cbt->insert(8);

    //getNodeCount
    cout << "Number of Nodes " << Cbt->getNodeCount() << endl;

    // getHeight
    cout << "Height of the tree is " << Cbt->getHeight() << endl;

    //getRoot
    const TreeNode<int> *tree = Cbt->getRoot();
    cout << "Root val is " << tree->val << endl;

    // clear
    Cbt->clear();
}