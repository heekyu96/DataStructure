#include <iostream>
#include "DoubleyLinkedList.h"
using namespace std;

int main() {
    DoubleyLinkedList* doubleyLinkedList = new DoubleyLinkedList();

    for(int i=0;i<10;i++){
        doubleyLinkedList->addData(i);
    }

    doubleyLinkedList->showList();

    for (int i=0;i<10;i++) {
        doubleyLinkedList->deleteData();
    }
    doubleyLinkedList->showList();
    cout<<"---"<<endl;
    for(int i=0;i<10;i++){
        doubleyLinkedList->addData(i);
    }
    doubleyLinkedList->deleteData(5);
    doubleyLinkedList->showList();

    cout<<doubleyLinkedList->getData(5);

    return 0;
}