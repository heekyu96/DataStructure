//
// Created by imtt9 on 2017-10-12.
//

#ifndef DOUBLEDLIST_DOUBLEYLINKEDLIST_H
#define DOUBLEDLIST_DOUBLEYLINKEDLIST_H
#define ErrorCode -999


#include "Node.h"

class DoubleyLinkedList {
private:
    Node* head;
    Node* tail;
    int listSize;
public:
    DoubleyLinkedList();
    void addData(int data);
    int getData(int idx);
    void deleteData(int idx);
    void deleteData();

    void showList();
};


#endif //DOUBLEDLIST_DOUBLEYLINKEDLIST_H
