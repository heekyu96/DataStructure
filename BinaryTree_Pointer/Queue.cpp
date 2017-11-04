//
// Created by imtt9 on 2017-11-03.
//

#include "Queue.h"


void Queue::put(TreeNode* data) {
    QueueNode* node = new QueueNode(data);

    if(front == nullptr){
        front= node;
        rear=node;
    }else{
        rear->setNext(node);
        rear=node;
    }
}

TreeNode* Queue::get() {
    QueueNode* node;

    if(front== nullptr){
        return nullptr;
    }else if(front==rear){
        node = this->front;
        front= nullptr;
        rear= nullptr;
    }
    else {
        node = this->front;
        front = front->getNext();
    }
    return node->getData();
}

Queue::Queue() {
    this->front= nullptr;
    this->rear= nullptr;
}

