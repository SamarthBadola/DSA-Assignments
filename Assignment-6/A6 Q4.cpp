#include<iostream>
using namespace std;
class Node{
public:int data;Node*prev,*next;
Node(int v){data=v;prev=next=NULL;}
};
class DLL{
    Node*head;
public:
    DLL(){head=NULL;}
    void insertEnd(int v){
        Node*n=new Node(v);
        if(!head){head=n;return;}
        Node*t=head;while(t->next){t=t->next;}t->next=n;n->prev=t;
    }
    bool isPalindrome(){
        if(!head){return true;}
        Node*l=head,*r=head;
        while(r->next){r=r->next;}
        while(l!=r&&r->next!=l){
            if(l->data!=r->data){return false;}
            l=l->next;r=r->prev;
        }
        return true;
    }
};
int main(){
    DLL d;
    d.insertEnd('r');
    d.insertEnd('a');
    d.insertEnd('c');
    d.insertEnd('e');
    d.insertEnd('c');
    d.insertEnd('a');
    d.insertEnd('r');
    if(d.isPalindrome()){cout<<"Palindrome\n";}
    else{cout<<"Not Palindrome\n";}
    return 0;
}
