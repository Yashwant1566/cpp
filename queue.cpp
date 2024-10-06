#include <iostream>
using namespace std;

#define n 20 

class queue{
    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int value){
        if(back==n-1){
            cout<<"queue is full";
            return;
        }
         back++;
         arr[back]=value;

         if(front==-1){
            front++;
         }
    }
    void pop(){
        if(front==-1){
            cout<<"queue is empty";
            return;
        }
        front++;
    }
    int  peek(){
        if(front==-1 || front>back){
            cout<<"queue is empty";
            return -1;
        }
        return arr[front];
    }
    bool isempty(){
        return front==-1;
    }
    

};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
     q.pop();
    cout<<q.isempty()<<endl;

    cout<<q.peek();
}