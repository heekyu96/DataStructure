//
// Created by imtt9 on 2017-11-03.
//

#ifndef TREE_POINTER_BINARYTREE_H
#define TREE_POINTER_BINARYTREE_H

#include "TreeNode.h"
#include "Queue.h"
#include <iostream>
#include <cmath>
using namespace std;

class BinaryTree {
    TreeNode* root;
    int nodeCount;
    int level;

    void preOrder(TreeNode* node);
    void postOrder(TreeNode* node);
    void inOrder(TreeNode* node);
public:
    BinaryTree();
    void makeTree();
    void preOrder();
    void postOrder();
    void inOrder();
    void levelOrder();
};


#endif //TREE_POINTER_BINARYTREE_H
