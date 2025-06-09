#include<iostream>
#include<vector>
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
void detect_loop(Node* head){
   Node* fast=head;
   Node* slow=head;
   int a=0;
   while(fast->next!=nullptr&&fast!=NULL){
    fast=fast->next->next;
    slow=slow->next;
    if(fast==slow){
      slow=head;
    while(fast!=NULL&&fast->next!=NULL){
      slow=slow->next;
      fast=fast->next;
      if(slow==fast){
        cout<<slow->data;
        a++;
        break;
      }
    }
            } 
     
          }
          if(a==0){
            cout<<"no loop present";
          }
}
Node* convert_arr2_LL(int arr[],int m,int n){
    Node*head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<m;i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
      }
    Node* temp=head;
    while(temp->data!=n){
        temp=temp->next;
      }
    mover->next=temp;
    return head;
}
int main(){
    int m;
    cout<<"size of arr:";
    cin>>m;
   int arr[m];
   for(int i=0;i<m;i++){
   cin>>arr[i];
   }
      int n;
      cout<<"enter the number for loop:";
      cin>>n;
    Node* head=convert_arr2_LL(arr,m,n);
     detect_loop(head);
    return 0;
}