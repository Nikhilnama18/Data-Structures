#include "../TreeNode.h"
#include "./BST.h"
#include <bits/stdc++.h>
using namespace std;

template <typename T>
BST<T>::BST() : nodes(0), root(nullptr) {}

template <typename T>
void BST<T>::insert(T data)
{
    if (root == nullptr)
    {
        root = new TreeNode<T>(data);
        nodes = 1;
        return;
    }
    TreeNode<T> *temp = root;
    while (true)
    {
        if (data <= temp->val)
        {
            if (temp->left)
                temp = temp->left;
            else
            {
                temp->left = new TreeNode<T>(data);
                nodes += 1;
                return;
            }
        }
        else
        {
            if (temp->right)
                temp = temp->right;
            else
            {
                temp->right = new TreeNode<T>(data);
                nodes += 1;
                return;
            }
        }
    }
    return;
}

template <typename T>
void pre(TreeNode<T> *root)
{
    if (root == nullptr)
        return;
    pre(root->left);
    cout << root->val << " ";
    pre(root->right);
}

template <typename T>
void in(TreeNode<T> *root)
{
    if (root == nullptr)
        return;
    cout << root->val << " ";
    in(root->left);
    in(root->right);
}

template <typename T>
void post(TreeNode<T> *root)
{
    if (root == nullptr)
        return;
    post(root->left);
    post(root->right);
    cout << root->val << " ";
}

template <typename T>
void BST<T>::preorder()
{
    pre(root);
    cout << endl;
    return;
}

template <typename T>
void BST<T>::inorder()
{
    in(root);
    cout << endl;
    return;
}

template <typename T>
void BST<T>::postorder()
{
    post(root);
    cout << endl;
    return;
}

template <typename T>
TreeNode<T> *BST<T>::getRoot()
{
    return root;
}

template <typename T>
int BST<T>::getNodeCount()
{
    return nodes;
}

template <typename T>
int BST<T>::getHeight()
{
    // write code;
    if (root == nullptr)
        return 0;

    queue<TreeNode<T> *> qu;
    qu.push(root);
    int size = 0;
    while (qu.size())
    {
        int n = qu.size();
        size += 1;
        for (int i = 0; i < n; i++)
        {
            TreeNode<T> *temp = qu.front();
            qu.pop();
            if (temp->left)
                qu.push(temp->left);
            if (temp->right)
                qu.push(temp->right);
        }
    }
    return size;
}

template <typename T>
void BST<T>::clear()
{
    root = nullptr;
    nodes = 0;
    return;
}