//
// Created by imtt9 on 2017-11-03.
//

#ifndef TREEPOINTER_QUEUE_H
#define TREEPOINTER_QUEUE_H

#include "QueueNode.h"

class Queue {
    QueueNode* front;
    QueueNode* rear;

public:
    Queue();
    void put(TreeNode* data);
    TreeNode* get();
};


#endif //TREEPOINTER_QUEUE_H
