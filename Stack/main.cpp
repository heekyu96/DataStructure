#include <iostream>
#include "Stack.h"

using namespace std;

int Menu();

int main() {
    Stack* stack = new Stack();
    bool endFlag= true;

    while(endFlag) {
        switch (Menu()) {//menu함수로 선택지를 choice하게 함
            case 1:
                stack->push_menu();
                break;
            case 2:
                stack->pop_menu();
                break;
            case 3:
                stack->topExam();
                break;
            case 4:
                stack->IsEmpty_menu();
                break;
            case 5:
                stack->isFull_menu();
                break;
            case 6:
                endFlag=false;//종료하기위한 무한루프 상태 변환
                break;
            default:
                cout << "Wrong Choice" << endl;
                break;
        }
    }
    return 0;
}

int Menu(){
    int choice;
    cout<<"Basic Stack Program 1.0"<<endl;
    cout<<" 1.Push"<<endl;
    cout<<" 2.Pop"<<endl;
    cout<<" 3.Top Exam"<<endl;
    cout<<" 4.Is Empty"<<endl;
    cout<<" 5.is Full"<<endl;
    cout<<" 6.Quit"<<endl;
    cout<<"Your Choice is : ";

    cin>>choice;

    return choice;
}