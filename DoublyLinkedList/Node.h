//
// Created by imtt9 on 2017-10-12.
//

#ifndef DOUBLEDLIST_NODE_H
#define DOUBLEDLIST_NODE_H


class Node {
private:
    int data;
    Node* pre;
    Node* nxt;
public:
    int getData() const;

    Node();

    Node(int data);

    Node *getPre() const;

    void setPre(Node *pre);

    Node *getNxt() const;

    void setNxt(Node *nxt);
};


#endif //DOUBLEDLIST_NODE_H
