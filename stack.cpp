#include <iostream>
using namespace std;
#define n 100
class stack{
  
  private:
 int* arr;
 int top;
 int maxsize;

 public :
    stack(){
      arr =new int[n];
      maxsize=n;
      top=-1;
   }

  void push(int a){
      if(top==-1){
            cout<<"stack overflow"<<endl;
            return -1;
        }
        top++;
        arr[top]=a;
    }
 
  void pop(){
      if(top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        top--;
   }
   int peek() {
        if (top == -1) {
            cout << "stack underflow" << endl;
            return ;  // Return a default or error value
        }
        return arr[top];
    }
  void empty(){
     if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
     else{
        cout<<"stack is not empty";
      }
   }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.peek()<<endl;
    return 0;
  }

