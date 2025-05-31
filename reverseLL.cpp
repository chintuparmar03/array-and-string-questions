#include<iostream>
#include<stack>
using namespace std;
class Node {
    public :
   int data;
   Node* next;
   Node(int data1,Node* next1){
    data=data1;
    next=next1;
   }
   Node (int data1){
    data = data1;
    next = nullptr;
   }
};
Node* convert2LL(int arr[],int n){
    Node*head = new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<n;i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    mover=temp;
    }
    return head;
}
Node* reverseLL(Node*head){
    Node* temp=head;
    stack<int>st;
    while(temp!=nullptr){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
}
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

 int main() {
   int arr[]={10,20,30,40};
   int n=sizeof(arr)/sizeof(arr[0]);
   Node*head=convert2LL(arr,n);
   head=reverseLL(head);
   printLL(head);
   
    return 0;
}