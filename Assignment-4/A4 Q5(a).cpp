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
    void display(){
        if(isEmpty()){cout<<"Empty\n";return;}
        for(int i=front;i<=rear;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
};

class Stack2Q{
    Queue q1,q2;
public:
    void push(int x){
        q2.enqueue(x);
        while(!q1.isEmpty()) q2.enqueue(q1.dequeue());
        Queue temp=q1; q1=q2; q2=temp;
    }
    int pop(){return q1.dequeue();}
    int top(){return q1.getFront();}
    bool empty(){return q1.isEmpty();}
    void display(){q1.display();}
};

int main(){
    Stack2Q st;
    int choice,val;
    do{
        cout<<"\n--- Stack using 2 Queues ---\n";
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
