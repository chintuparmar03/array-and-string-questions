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

int find_middle(Node* head){
   Node* fast=head;
   Node* slow=head;
   while(fast&&fast->next){
    slow=slow->next;
    fast=fast->next->next;
   }
   return slow->data;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node*head = convertarr2LL(arr,n);
    int res = find_middle(head);
    cout<<res;

       return 0;
}