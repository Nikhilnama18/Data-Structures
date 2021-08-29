#include "CompleteBinaryTree.h"
#include "../TreeNode.h"
#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;

// Constructor
template <typename T>
CompleteBinaryTree<T>::CompleteBinaryTree() : nodes(0), root(nullptr) {}

// insert
template <typename T>
void CompleteBinaryTree<T>::insert(T data)
{
    if (root == nullptr)
    {
        // height += 1;
        nodes += 1;
        root = new TreeNode<T>(data);
        return;
    }
    queue<TreeNode<T> *> qu;
    qu.push(root);
    while (qu.size())
    {
        TreeNode<T> *temp = qu.front();
        qu.pop();
        if (temp->left == nullptr)
        {
            temp->left = new TreeNode<T>(data);
            break;
        }
        else
            qu.push(temp->left);
        if (temp->right == nullptr)
        {
            temp->right = new TreeNode<T>(data);
            break;
        }
        else
            qu.push(temp->right);
    }
    nodes += 1;
    return;
}

// remove
// template <typename T>
// void CompleteBinaryTree<T>::remove()
// {
//     try
//     {
//         if (root == nullptr)
//             throw out_of_range("CompleteBinaryTree::remove: Root is null");
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     queue<TreeNode<T> *> qu;
//     TreeNode<T> *temp;
//     qu.push(root);
//     while (qu.size())
//     {
//         temp = qu.front();
//         qu.pop();
//         if (temp->left != nullptr)
//             qu.push(temp->left);
//         if (temp->right != nullptr)
//             qu.push(temp->right);
//     }
//     cout << "Temp val is " << temp->val << endl;
//     temp = nullptr;
//     nodes -= 1;
//     cout << "Root val is " << root->left->left->left->val << endl;
//     return;
// }

//clear
template <typename T>
void CompleteBinaryTree<T>::clear()
{
    root = nullptr;
    nodes = 0;
    return;
}

// getRoot
template <typename T>
const TreeNode<T> *CompleteBinaryTree<T>::getRoot()
{
    return root;
}

// getHeight
template <typename T>
int CompleteBinaryTree<T>::getHeight()
{
    int n = 0;
    TreeNode<T> *temp = root;
    while (temp != nullptr)
    {
        n++;
        temp = temp->left;
    }
    return n;
}

// getNodesCount
template <typename T>
int CompleteBinaryTree<T>::getNodeCount()
{
    return nodes;
}
