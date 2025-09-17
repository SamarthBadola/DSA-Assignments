#include<iostream>
using namespace std;
#define MAX 100
class Queue{
    int arr[MAX],front,rear;
public:
    Queue(){front=rear=-1;}
    bool isEmpty(){return front==-1;}
    void enqueue(int x){
        if(rear==MAX-1){cout<<"Queue Full\n";return;}
        if(isEmpty()) front=rear=0; else rear++;
        arr[rear]=x;
    }
    int dequeue(){
        if(isEmpty()){cout<<"Queue Empty\n";return -1;}
        int x=arr[front];
        if(front==rear) front=rear=-1; else front++;
        return x;
    }
    int getFront(){return isEmpty()?-1:arr[front];}
    int size(){return isEmpty()?0:rear-front+1;}
    void display(){
        if(isEmpty()){cout<<"Empty\n";return;}
        for(int i=front;i<=rear;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
};

class Stack1Q{
    Queue q;
public:
    void push(int x){
        q.enqueue(x);
        int sz=q.size();
        for(int i=0;i<sz-1;i++) q.enqueue(q.dequeue());
    }
    int pop(){return q.dequeue();}
    int top(){return q.getFront();}
    bool empty(){return q.isEmpty();}
    void display(){q.display();}
};

int main(){
    Stack1Q st;
    int choice,val;
    do{
        cout<<"\n--- Stack using 1 Queue ---\n";
        cout<<"1.Push\n2.Pop\n3.Top\n4.Display\n5.Exit\nEnter choice: ";
        cin>>choice;
        switch(choice){
            case 1: cout<<"Enter value: ";cin>>val;st.push(val);break;
            case 2: cout<<"Popped: "<<st.pop()<<endl;break;
            case 3: cout<<"Top: "<<st.top()<<endl;break;
            case 4: st.display();break;
            case 5: cout<<"Exiting...\n";break;
            default: cout<<"Invalid!\n";
        }
    }while(choice!=5);
    return 0;
}
