#include <iostream>
using namespace std;
//#define n 100

//class stack {
// private:
//     int* arr;
//     int top;
//     int maxsize;

// public:
//     stack() {
//         arr = new int[n];
//         maxsize = n;
//         top = -1;
//     }

//     void push(int a) {
//         if (top >= n - 1) {
//             cout << "stack overflow" << endl;
//             return;
//         }
//         top++;
//         arr[top] = a;
//     }

//     void pop() {
//         if (top == -1) {
//             cout << "stack underflow" << endl;
//             return;
//         }
//         top--;
//     }

//     int peek() {
//         if (top == -1) {
//             cout << "stack underflow" << endl;
//             return -1;  // Return a default or error value
//         }
//         return arr[top];
//     }

//     bool empty() {
//         return top<0;
//     }
// };

// int main() {
//     stack st;
//     // st.push(1);
//     // st.push(2);
//     // st.push(3);
//     // st.push(4);
//     // st.pop();
//     // st.pop();
//     // st.peek();
//     st.pop()<<endl;
//     // cout<<st.peek() << endl;
//     return 0;
// }




class Node{
    
    public:
        int data;
        Node*next;

    Node(int value){
        this->data=value;
        this->next=nullptr;
    }
};
class stack{
    private:
        Node*head;
        int capacity;
        int currSize;

    public:
        stack(){
          this->head=nullptr;
          this->capacity=3;
          this-> currSize=0;
    }

    void push(int value){
        if(currSize==capacity){
            cout<<"stack overflow"<<endl;
            return;
        }
         Node* newNode=new Node(value);
        //newNode->data=value;
        newNode->next=head;
        head=newNode;
        currSize++;
       cout<<"new node added"<<endl;
    }
    int pop(){
          if(head==nullptr){
            cout<<"underflow"<<endl;
            return -1;
          }
          Node* newhead=head;
          head->next=head;
          int removveddata=newhead->data;
          delete newhead;
          currSize--;
          return removveddata;
    }
    bool empty(){
        return head==nullptr;
    }
    int peek(){
        if(head==nullptr){
            cout<<"stack underflow"<<endl;
            return -1;
        }
        return head->data;
    }
} ;
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.peek() << endl;
    cout << st.pop() << endl;
    cout << st.peek() << endl;
    return 0;
}
