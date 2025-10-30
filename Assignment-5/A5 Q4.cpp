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
    void reverse(){
        Node*prev=NULL,*curr=head,*next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    void display(){
        Node*temp=head;
        while(temp){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main(){
    LinkedList l;
    l.insertEnd(1);
    l.insertEnd(2);
    l.insertEnd(3);
    l.insertEnd(4);
    cout<<"Original List: ";l.display();
    l.reverse();
    cout<<"Reversed List: ";l.display();
    return 0;
}
