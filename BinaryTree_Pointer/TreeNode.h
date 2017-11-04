//
// Created by imtt9 on 2017-11-03.
//

#ifndef TREE_POINTER_TREENODE_H
#define TREE_POINTER_TREENODE_H


class TreeNode {
    int data;
public:
    int getData() const;

private:
    TreeNode* left;
    TreeNode* right;

public:
    TreeNode(int data);

    TreeNode *getLeft() const;

    void setLeft(TreeNode *left);

    TreeNode *getRight() const;

    void setRight(TreeNode *right);
};


#endif //TREE_POINTER_TREENODE_H
