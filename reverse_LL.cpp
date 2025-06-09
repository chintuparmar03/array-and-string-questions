#include<iostream>
#include<vector>
#include<stack>
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
Node* convert2_LL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
     for(int i=1;i<arr.size();i++){
         Node* temp=new Node(arr[i]);
         mover->next=temp;
         mover=temp; 
     }
     return head;
}
void print(Node*head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
Node* reverseLL(Node*head){
    stack<int>s;
    Node* temp=head;
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data=s.top();
        temp=temp->next;
        s.pop();
    }
    return head;
}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    Node*head=convert2_LL(arr);
    head=reverseLL(head);
    print(head);

    return 0;
}