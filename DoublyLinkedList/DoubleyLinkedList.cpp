//
// Created by imtt9 on 2017-10-12.
//
#include "DoubleyLinkedList.h"
#include <iostream>

using namespace std;

DoubleyLinkedList::DoubleyLinkedList() {
    head = nullptr;
    tail = nullptr;
    listSize = 0;
}

void DoubleyLinkedList::deleteData() {
    if (head == nullptr) {
//        cout<<"Empty";
    } else if (head == tail) {
        this->listSize--;
        delete head;
        head = nullptr;
        tail = nullptr;
    } else {
        this->listSize--;

        tail=tail->getPre();

        delete tail->getNxt();

        tail->setNxt(nullptr);
    }
}

void DoubleyLinkedList::deleteData(int idx) {
    if (this->listSize < idx) {
        //cout<<"Wrong Index"<<endl;
    } else {
        int loopCount = 1;
        Node *curNode = this->head;


        while (loopCount != idx) {
            curNode = curNode->getNxt();
            loopCount++;
        }
        listSize--;
        if (head == nullptr) {
            //cout<<"No more Data";
        } else if (curNode == this->head) {
            head = nullptr;
            tail = nullptr;
        } else if (curNode == this->tail) {
            Node *temp = tail;
            tail = tail->getPre();

            tail->setNxt(nullptr);
            temp->setPre(nullptr);

            delete temp;
        } else {
            curNode->getPre()->setNxt(curNode->getNxt());
            curNode->getNxt()->setPre(curNode->getPre());

            delete curNode;
        }
    }
}

int DoubleyLinkedList::getData(int idx) {
    if (this->listSize < idx) {
        return ErrorCode;
    } else {
        int loopCount = 1;
        Node *curNode = this->head;

        while (loopCount != idx) {
            curNode = curNode->getNxt();
            loopCount++;
        }
        return curNode->getData();
    }
}

void DoubleyLinkedList::addData(int data) {
    Node *node = new Node(data);
    this->listSize++;
    if (head == nullptr) {
        head = node;
        tail = node;
    } else {
        tail->setNxt(node);
        node->setPre(tail);
        tail = node;
    }
}

void DoubleyLinkedList::showList() {
    Node *curNode = this->head;

    while (curNode != nullptr) {
        if(curNode!=head){
            cout<<" - ";
        }
        cout<<"[ ";
        cout << curNode->getData();
        cout<< " ]";
        curNode = curNode->getNxt();
    }

    cout<<endl;
}
