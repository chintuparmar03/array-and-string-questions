#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
Node* convertarr2LL(int arr[],int n){
      Node* head=new Node(arr[0]);
      Node* mover=head;
      for(int i=1;i<n;i++){
           Node* temp=new Node(arr[i]);
           mover->next=temp;
           mover=temp;
      }
      return head;
}

Node* insert2_end(Node*head,int val){
         Node* new_node=new Node(val);
         Node* temp=head;
         while(temp->next!=nullptr){
            temp=temp->next;
         }
         temp->next=new_node;
         return head;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int val;
    cout<<"enter the value:";
    cin>>val;
    int n=sizeof(arr)/sizeof(arr[0]);
   Node*head = convertarr2LL(arr,n);
   head=insert2_end(head,val);
    print(head);
       return 0;
}