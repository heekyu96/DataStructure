//
// Created by imtt9 on 2017-11-03.
//

#include "BinaryTree.h"

BinaryTree::BinaryTree() {
    this->root = nullptr;
    this->nodeCount = 0;
    this->level = -1;
}

void BinaryTree::makeTree() {
    cout<<"-1 : stop make nodes. Start Build Tree"<<endl;
    int inputData;
    bool flag=true;
    TreeNode **treeNodes;

    while(flag) {
        if (this->level == -1) {
            cin >> inputData;
            if (inputData == -1) {
                flag = false;
            }
            TreeNode *newNode = new TreeNode(inputData);
            treeNodes = new TreeNode*[1];
            treeNodes[0] = newNode;
            this->root=newNode;
            nodeCount++;
        } else {
            TreeNode **tempNodes = new TreeNode *[(int) pow(2, level)];
            int tempidx = 0;
            int idx = 0;
            for (int i = 0; i < (int) pow(2, level); i++) {
                cin >> inputData;
                if (inputData == -1) {
                    flag = false;
                    break;
                }
                TreeNode *newNode = new TreeNode(inputData);
                if (i % 2 == 0) {
                    treeNodes[idx]->setLeft(newNode);
                    tempNodes[tempidx++] = newNode;
                } else {
                    treeNodes[idx++]->setRight(newNode);
                    tempNodes[tempidx++] = newNode;
                }
                nodeCount++;
            }
            treeNodes=tempNodes;
        }
        level = (int) logb(nodeCount);
        if ((int) pow(2, level+1)-1 == nodeCount) {
            level++;
        }
    }
}

void BinaryTree::preOrder() {
    cout<<endl;
    cout<<"PreOrder Traversal"<<endl;
    preOrder(this->root);
    cout<<endl;
}

void BinaryTree::preOrder(TreeNode *node) {
    if(node == nullptr){
        return;
    }
    cout<<node->getData();
    cout<<" ";
    preOrder(node->getLeft());
    preOrder(node->getRight());
}

void BinaryTree::postOrder() {
    cout<<endl;
    cout<<"PostOrder Traversal"<<endl;
    postOrder(this->root);
    cout<<endl;
}

void BinaryTree::postOrder(TreeNode *node) {
    if(node == nullptr){
        return;
    }
    postOrder(node->getLeft());
    postOrder(node->getRight());
    cout<<node->getData();
    cout<<" ";
}

void BinaryTree::inOrder() {
    cout<<endl;
    cout<<"InOrder Traversal"<<endl;
    inOrder(this->root);
    cout<<endl;
}

void BinaryTree::inOrder(TreeNode *node) {
    if(node == nullptr){
        return;
    }
    inOrder(node->getLeft());
    cout<<node->getData();
    cout<<" ";
    inOrder(node->getRight());
}

void BinaryTree::levelOrder() {
    cout<<endl;
    cout<<"LevelOrder Traversal"<<endl;
    Queue* queue = new Queue;
    TreeNode* visitNode;
    queue->put(this->root);
    while (true){
        visitNode = queue->get();
        if(visitNode== nullptr){
            break;
        }
        cout<<visitNode->getData();
        cout<<" ";
        queue->put(visitNode->getLeft());
        queue->put(visitNode->getRight());
    }


}


