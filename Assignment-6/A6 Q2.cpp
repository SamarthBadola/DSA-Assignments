#include<iostream>
using namespace std;
class Node{
public:
    int data;Node*next;
    Node(int val){data=val;next=NULL;}
};
class CircularList{
    Node*head;
public:
    CircularList(){head=NULL;}
    void insertEnd(int val){
        Node*n=new Node(val);
        if(!head){head=n;head->next=head;return;}
        Node*temp=head;
        while(temp->next!=head){temp=temp->next;}
        temp->next=n;n->next=head;
    }
    void display(){
        if(!head){cout<<"Empty\n";return;}
        Node*temp=head;
        do{cout<<temp->data<<" ";temp=temp->next;}
        while(temp!=head);
        cout<<head->data<<endl;
    }
};
int main(){
    CircularList c;
    c.insertEnd(20);
    c.insertEnd(100);
    c.insertEnd(40);
    c.insertEnd(80);
    c.insertEnd(60);
    c.display();
    return 0;
}
