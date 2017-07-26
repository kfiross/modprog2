//
// Created by kfirma on 25/07/17.
//

#include "q2.h"
#include <iostream>
void func(struct NodeT* root,
          int &shallowest_leaf_depth , int &deepest_leaf_depth)
{
    shallowest_leaf_depth = min_depth(root);
    deepest_leaf_depth = get_depth(root);
}

int max(int a, int b)
{
    return ( a > b)? a: b;
}

int get_depth(struct NodeT* root)
{
    if (root ==NULL)
        return -1;

    int left_depth = get_depth(root->_left);
    int right_depth = get_depth(root->_right);
    return (max(left_depth,right_depth)+ 1);
}

int min(int a, int b)
{
    return ( a < b)? a: b;
}

int min_depth(struct NodeT* root)
{
    // Corner case. Should never be hit unless the code is
    // called on root = NULL
    if (root == NULL)
        return -1;

    // Base case : Leaf Node. This accounts for height = 1.
    if (is_leaf(root))
        return 1;

    // If left subtree is NULL, recur for right subtree
    if (root->_left==NULL)
        return min_depth(root->_right) + 1;

    // If right subtree is NULL, recur for right subtree
    if (root->_right==NULL)
        return min_depth(root->_left) + 1;

    return min(min_depth(root->_left), min_depth(root->_right)) + 1;
}

bool is_leaf(struct NodeT* root)
{

    return (root !=NULL &&
            root->_left == NULL &&
            root->_right == NULL);
}