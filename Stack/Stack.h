//
// Created by imtt9 on 2017-09-24.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
class Stack {
private://외부에서 접근불가
    char* datas;
    int topIndex;
    int size;
protected://상속관계에 한해 접근가능
    char pop();
    void push(char* data);

    bool isFull();
    bool isEmpty();
public://모두 접근가능
    Stack();
    void viewStack();
    void isFull_menu();
    void IsEmpty_menu();
    void pop_menu();
    void push_menu();
    void topExam();


};


#endif //STACK_STACK_H
