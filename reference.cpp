#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

     Node(int data){
        this->data=data;
        this->next=NULL;
     }
};

void insertathead (Node* &head,int data){
    Node* new_node =new Node(data);
    new_node->next=head;
    head=new_node;
}
void insertatend (Node* &head,int data){
   Node* new_node=new Node(data);
    Node* temp=head;

   while(temp->next!=NULL){
    temp=temp->next;
   
   }
   temp->next=new_node;
   
}
void insertatrandom(Node* &head,int data ,int pos) {
   if(pos==0){
    insertathead(head,data);
    return ;
   }
    Node* new_node=new Node(data);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
   
}
void updateatpos(Node* &head,int k,int data){
     Node* temp=head;
    int current_pos=0;

     while(current_pos!=k){
        temp=temp->next;
        current_pos ++;
     }
     temp->data=data;
       
} 
void deleteathead(Node* &head ){
    Node* temp=head;
    head=head->next;
    free(temp);
}
void deleteatend(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    second_last->next=NULL;
    // free(second_last->next);
    
}
void display(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
   Node* head=NULL;
   insertathead(head,2);
   display(head);
    insertathead(head,10);
   display(head);
    insertathead(head,20);
   display(head);
    insertathead(head,30);
   display(head);
    insertatend(head,40);
   display(head);
   insertatrandom(head,15,2);
   display(head);
   updateatpos(head,3,2005);
    display(head);
    deleteathead(head);
    display(head);
     deleteatend(head);
    display(head);
    

}