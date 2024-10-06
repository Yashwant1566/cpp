#include <iostream>
using namespace std;

bool isArrayFul(int max_size,int currentSize){
    return (currentSize>=max_size);
}
int main(){
    int max_size=5;
    int currentSize;
    cin>>currentSize;
    int myArray[max_size]={1,2,3,5,6};
    if(isArrayFul(max_size,currentSize)){
        cout<<"array is full"<<endl;
    }
    else{
        cout<<"array is not full"<<endl;
    }
    cin>>currentSize;
     if(isArrayFul(max_size,currentSize)){
        cout<<"array is full"<<endl;
    }
    else{
        cout<<"array is not full"<<endl;
    }
} 
