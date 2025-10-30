#include<iostream>
using namespace std;
class DNode{
public:int data;DNode*prev,*next;
DNode(int v){data=v;prev=next=NULL;}
};
class DLL{
    DNode*head;
public:
    DLL(){head=NULL;}
    void insertEnd(int v){
        DNode*n=new DNode(v);
        if(!head){head=n;return;}
        DNode*t=head;while(t->next){t=t->next;}t->next=n;n->prev=t;
    }
    int size(){
        int c=0;DNode*t=head;while(t){c++;t=t->next;}return c;
    }
};
class CNode{
public:int data;CNode*next;CNode(int v){data=v;next=NULL;}
};
class CLL{
    CNode*head;
public:
    CLL(){head=NULL;}
    void insertEnd(int v){
        CNode*n=new CNode(v);
        if(!head){head=n;head->next=head;return;}
        CNode*t=head;while(t->next!=head){t=t->next;}t->next=n;n->next=head;
    }
    int size(){
        if(!head){return 0;}
        int c=0;CNode*t=head;
        do{c++;t=t->next;}while(t!=head);
        return c;
    }
};
int main(){
    DLL d;CLL c;
    d.insertEnd(10);d.insertEnd(20);d.insertEnd(30);
    c.insertEnd(5);c.insertEnd(15);c.insertEnd(25);
    cout<<"Size of DLL: "<<d.size()<<endl;
    cout<<"Size of CLL: "<<c.size()<<endl;
    return 0;
}
