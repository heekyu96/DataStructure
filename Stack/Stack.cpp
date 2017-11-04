//
// Created by imtt9 on 2017-09-24.
//

#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    size = 10;
    topIndex = -1;
    datas = new char[size];
}

char Stack::pop() {
    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return '!';
    } else {
        char temp = datas[topIndex--];//pop할 데이터 tmep변수에 저장후 topindex -1;
        datas[topIndex + 1] = '\0';
        return temp;
    }
}

void Stack::push(char* data) {
    if (!isFull()) {
        datas[++topIndex] = *data;
    } else {
        cout << "Stack is Full" << endl;
    }
}

bool Stack::isEmpty() {
    return topIndex == -1 ? true : false;//삼항연산자 조건?참일때 act:거짓일때 act
}

bool Stack::isFull() {
    return (topIndex + 1) == size ? true : false;//삼항연산자 조건?참일때 act:거짓일때 act
}

void Stack::viewStack() {
    cout << "+-+-+-+-+-+-+-+-+-+-+" << endl;
    for (int i = 0; i <= topIndex; i++) {
        cout << "|" << datas[i];
    }
    cout << endl << "+-+-+-+-+-+-+-+-+-+-+" << endl;

}

void Stack::isFull_menu() {
    isFull() ? cout << "Stack is Full" << endl : cout << "Stack is Not Full" << endl;
}

void Stack::IsEmpty_menu() {
    isEmpty() ? cout << "Stack is Empty" << endl : cout << "Stack is Not Empty" << endl;
}

void Stack::pop_menu() {
    pop();
    viewStack();
}

void Stack::push_menu() {
    char inputData;
    cout << "Data for PUSH : ";
    cin >> inputData;
    push(&inputData);

    viewStack();
}

void Stack::topExam() {
    //비어있을때는 stack is empty를 출력 그렇지 않을때는 제일 마지막으로 나온값 출력
    topIndex ==-1? cout<<"Stack is Empty"<<endl :cout<<"Top Data : "+datas[topIndex]<<endl;
}




