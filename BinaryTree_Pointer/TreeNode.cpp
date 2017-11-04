//
// Created by imtt9 on 2017-11-03.
//

#include "TreeNode.h"

TreeNode::TreeNode(int data) : data(data) {
    left= nullptr;
    right= nullptr;
}


TreeNode *TreeNode::getLeft() const {
    return left;
}

void TreeNode::setLeft(TreeNode *left) {
    TreeNode::left = left;
}

TreeNode *TreeNode::getRight() const {
    return right;
}

void TreeNode::setRight(TreeNode *right) {
    TreeNode::right = right;
}

int TreeNode::getData() const {
    return data;
}
