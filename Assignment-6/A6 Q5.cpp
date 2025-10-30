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
        while(
            temp->next
        ){temp=temp->next;}
        temp->next=n;
    }
    void makeCircular(){
        if(!head){return;}
        Node*temp=head;
        while(
            temp->next
        ){temp=temp->next;}
        temp->next=head;
    }
    bool isCircular(){
        if(!head){return false;}
        Node*slow=head;
        Node*fast=head->next;
        while(
            fast && fast->next
        ){
            if(slow==fast){return true;}
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};
int main(){
    LinkedList l;
    l.insertEnd(10);
    l.insertEnd(20);
    l.insertEnd(30);
    cout<<"Initially: "<<(l.isCircular()?"Circular\n":"Not Circular\n");
    l.makeCircular();
    cout<<"After making circular: "<<(l.isCircular()?"Circular\n":"Not Circular\n");
    return 0;
}
