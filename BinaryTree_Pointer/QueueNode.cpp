//
// Created by imtt9 on 2017-11-03.
//

#include "QueueNode.h"

TreeNode *QueueNode::getData() const {
    return data;
}

void QueueNode::setData(TreeNode *data) {
    this->data = data;
}

QueueNode *QueueNode::getNext() const {
    return next;
}

void QueueNode::setNext(QueueNode *next) {
    this->next = next;
}

QueueNode::QueueNode(TreeNode *data) : data(data) {
    this->next= nullptr;
}
