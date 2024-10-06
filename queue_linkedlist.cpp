#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    
    public:
    node(int value){
        data=value;
        next=NULL;
    }
};
class queue{
    node*front;
    node*back;
     
     public:
     queue(){
        front=NULL;
        back=NULL;
     }
     void push(int d){
        node*newnode=new node(d);
        if(front==NULL){
            front=newnode;
            back=newnode;
        }
        back->next=newnode;
        back=newnode;
     }
     void pop(){
        if(front==NULL){
            cout<<"queue is empty"<<endl;
            return;
        }
        node*todelete=front;
        front=front->next;
        delete todelete;
     }
     int peek(){
         if(front==NULL){
            cout<<"queue is empty"<<endl;
            return -1;
        }
         return front->data;
     }
     bool empty(){
        return front->next=NULL;
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
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    // cout<<q.peek();
}