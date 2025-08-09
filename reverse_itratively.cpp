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
        int data=data1;
        Node* next=next;
    }
};
Node* convert2_arr(int arr[],int n){
    Node * head=new Node (arr[0]);
    Node* mover=head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
Node* reverse(Node* head){
    Node* prev=NULL;
    Node* temp=head;
    while(temp!=NULL){
        Node* front = temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
int main (){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head=convert2_arr(arr,n);
    head=reverse(head);
    print(head);
    return 0;
}