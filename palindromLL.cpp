#include<iostream>
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
Node* convert2_arr(int arr[],int n){
    Node* head=new Node (arr[0]);
    Node*mover=head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void palindrom(Node* head){
    Node* temp=head;
    stack<int>s;
    bool ispali=true;
    while(temp!=nullptr){
        s.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        if(s.top()!=temp->data){
            cout<<"it is not a palindrom";
              ispali=false;
              break;
        }
        s.pop();
        temp=temp->next;
    }
    if(ispali==true){
        cout<<"it is a palindrom";
    }
}
void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head=convert2_arr(arr,n);
    print(head);
     palindrom(head);
    return 0;
}