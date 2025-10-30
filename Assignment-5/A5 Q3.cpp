#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node(int val){data=val;next=NULL;}
};
class LinkedList{
    Node*head;
public:
    LinkedList(){head=NULL;}
    void insertEnd(int val){
        Node*n=new Node(val);
        if(!head){head=n;return;}
        Node*temp=head;
        while(temp->next){temp=temp->next;}
        temp->next=n;
    }
    void findMiddle(){
        if(!head){cout<<"List empty\n";return;}
        Node*slow=head,*fast=head;
        while(fast&&fast->next){slow=slow->next;fast=fast->next->next;}
        cout<<"Middle element: "<<slow->data<<endl;
    }
};
int main(){
    LinkedList l;
    l.insertEnd(1);
    l.insertEnd(2);
    l.insertEnd(3);
    l.insertEnd(4);
    l.insertEnd(5);
    l.findMiddle();
    return 0;
}
