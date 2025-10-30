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
        Node*temp=head;while(temp->next) temp=temp->next;
        temp->next=n;
    }
    void countAndDelete(int key){
        int count=0;
        Node*temp=head,
        *prev=NULL;
        while(temp){
            if(temp->data==key){
                count++;
                if(temp==head)
                {head=head->next;delete temp;temp=head;
                    
                }
                else{
                    prev->next=temp->next;
                delete temp;temp=prev->next;
                    
                }
            }
            else
            {prev=temp;temp=temp->next;
            }
            }
        cout<<"Count:"<<count<<endl;
        display();
    }
    void display(){
        Node*temp=head;
        if(!temp){
            cout<<"Updated List:Empty\n";return;
        }
        cout<<"Updated Linked List:";
        while(temp){
            cout<<temp->data<<"->";temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main(){
    LinkedList l;
    l.insertEnd(1);
    l.insertEnd(2);
    l.insertEnd(1);
    l.insertEnd(2);
    l.insertEnd(1);
    l.insertEnd(3);
    l.insertEnd(1);
    l.countAndDelete(1);
    return 0;
}
