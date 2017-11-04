//
// Created by imtt9 on 2017-10-12.
//

#include "Node.h"

Node::Node(int data) : data(data) {
    pre= nullptr;
    nxt= nullptr;
}

Node *Node::getPre() const {
    return pre;
}

void Node::setPre(Node *pre) {
    Node::pre = pre;
}

Node *Node::getNxt() const {
    return nxt;
}

void Node::setNxt(Node *nxt) {
    Node::nxt = nxt;
}

Node::Node() {
    data= 0;
    pre= nullptr;
    nxt= nullptr;
}

int Node::getData() const {
    return data;
}
