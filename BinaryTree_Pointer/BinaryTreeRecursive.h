//
// Created by imtt9 on 2017-11-03.
//

#ifndef TREE_POINTER_BINARYTREE_H
#define TREE_POINTER_BINARYTREE_H

#include "TreeNode.h"
#include "Queue.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class BinaryTreeRecursive {
    TreeNode* root;
    int nodeCount;
    int level;

    void preOrder(TreeNode* node);
    void postOrder(TreeNode* node);
    void inOrder(TreeNode* node);
    void makeTree(TreeNode** pTreeNode);

public:
    BinaryTreeRecursive();
    void makeTree();
    void preOrder();
    void postOrder();
    void inOrder();
    void levelOrder();
};


#endif //TREE_POINTER_BINARYTREE_H
