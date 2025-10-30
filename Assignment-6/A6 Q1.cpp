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
    void insert(int val,int pos=0){
        Node*n=new Node(val);
        if(!head){head=n;n->next=head;head=n;head->next=head;return;}
        if(pos==0){
            Node*temp=head;
            while(temp->next!=head){temp=temp->next;}
            n->next=head;temp->next=n;head=n;return;
        }
        Node*temp=head;
        while(temp->next!=head){temp=temp->next;}
        temp->next=n;n->next=head;
    }
    void insertAfter(int key,int val){
        if(!head){cout<<"Empty\n";return;}
        Node*temp=head;
        do{if(temp->data==key){Node*n=new Node(val);n->next=temp->next;temp->next=n;return;}temp=temp->next;}
        while(temp!=head);
        cout<<"Key not found\n";
    }
    void deleteNode(int key){
        if(!head){cout<<"Empty\n";return;}
        Node*curr=head,*prev=NULL;
        do{
            if(curr->data==key){
                if(curr==head){
                    Node*temp=head;
                    while(temp->next!=head){temp=temp->next;}
                    if(head->next==head){delete head;head=NULL;}
                    else{temp->next=head->next;delete head;head=temp->next;}
                }else{prev->next=curr->next;delete curr;}
                return;
            }
            prev=curr;curr=curr->next;
        }while(curr!=head);
        cout<<"Key not found\n";
    }
    void search(int key){
        if(!head){cout<<"Empty\n";return;}
        Node*temp=head;int pos=1;
        do{
            if(temp->data==key){cout<<"Found at position "<<pos<<endl;return;}
            temp=temp->next;pos++;
        }while(temp!=head);
        cout<<"Not found\n";
    }
    void display(){
        if(!head){cout<<"Empty\n";return;}
        Node*temp=head;
        do{cout<<temp->data<<" ";temp=temp->next;}
        while(temp!=head);
        cout<<endl;
    }
};
int main(){
    CircularList c;int ch,val,key;
    do{
        cout<<"\n1.Insert Begin\n2.Insert End\n3.Insert After\n4.Delete Node\n5.Search\n6.Display\n7.Exit\nEnter choice: ";
        cin>>ch;
        switch(ch){
            case 1:cout<<"Enter value: ";cin>>val;c.insert(val,0);break;
            case 2:cout<<"Enter value: ";cin>>val;c.insert(val,1);break;
            case 3:cout<<"Enter key & value: ";cin>>key>>val;c.insertAfter(key,val);break;
            case 4:cout<<"Enter key: ";cin>>key;c.deleteNode(key);break;
            case 5:cout<<"Enter key: ";cin>>key;c.search(key);break;
            case 6:c.display();break;
            case 7:cout<<"Exiting...\n";break;
            default:cout<<"Invalid\n";
        }
    }while(ch!=7);
    return 0;
}
