//
// Created by imtt9 on 2017-11-03.
//

#ifndef TREEPOINTER_QUEUENODE_H
#define TREEPOINTER_QUEUENODE_H

#include "TreeNode.h"

class QueueNode {
    TreeNode* data;
    QueueNode* next;
public:
    QueueNode(TreeNode *data);

    TreeNode *getData() const;

    void setData(TreeNode *data);

    QueueNode *getNext() const;

    void setNext(QueueNode *next);
};


#endif //TREEPOINTER_QUEUENODE_H
