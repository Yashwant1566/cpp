#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class stack {
private:
    Node* head;
    int capacity;
    int currsize;

public:
    stack() {
        head = nullptr;
        capacity = 0;
        currsize = 0;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        currsize++;
        cout << "new node added" << endl;
    }

    int pop() {
        if (head == nullptr) {
            cout << "underflow" << endl;
            return -1;
        }
        Node* temp = head;
        head = head->next;
        int removedData = temp->data;
        delete temp;
        currsize--;
        return removedData;
    }

    bool empty() {
        return head == nullptr;
    }

    int peek() {
        if (head == nullptr) {
            cout << "stack underflow" << endl;
            return -1;
        }
        return head->data;
    }
};

int main() {
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
