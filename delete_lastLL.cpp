#include<iostream>
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
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
Node* deletelast(Node*head){
       Node* temp=head;
    while(temp->next->next!=NULL){
         temp=temp->next;
    }
      delete temp->next;
      temp->next=nullptr;
       return head;
}
int main()
{
   int arr[]={10,20,30,40};
   int n=sizeof(arr)/sizeof(arr[0]);
   Node*head=convert2LL(arr,n);
  head= deletelast(head);
   printLL(head);
   return 0;
}