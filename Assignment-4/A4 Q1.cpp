#include<iostream>
using namespace std;
#define MAX 100
class Queue{
    int arr[MAX],front,rear;
public:
    Queue(){front=-1;rear=-1;}
    bool isEmpty(){return(front==-1);}
    bool isFull(){return((rear+1)%MAX==front);}
    void enqueue(int x){
        if(isFull()){cout<<"Queue FULL\n";return;}
        if(isEmpty()){front=rear=0;}else rear=(rear+1)%MAX;
        arr[rear]=x;cout<<x<<" enqueued\n";
    }
    void dequeue(){
        if(isEmpty()){cout<<"Queue EMPTY\n";return;}
        cout<<arr[front]<<" dequeued\n";
        if(front==rear) front=rear=-1; else front=(front+1)%MAX;
    }
    void peek(){
        if(isEmpty()) cout<<"Queue EMPTY\n"; else cout<<"Front: "<<arr[front]<<endl;
    }
    void display(){
        if(isEmpty()){cout<<"Queue EMPTY\n";return;}
        cout<<"Queue: ";int i=front;while(true){cout<<arr[i]<<" ";if(i==rear)break;i=(i+1)%MAX;}cout<<endl;
    }
};
int main(){
    Queue q;
    int n,val;
    do{
        cout<<"1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.isEmpty\n6.isFull\n0.Exit\nChoice: ";
        cin>>n;
        switch(n){
            case 1:cout<<"Value: ";cin>>val;q.enqueue(val);break;
            case 2:q.dequeue();break;
            case 3:q.peek();break;
            case 4:q.display();break;
            case 5:cout<<(q.isEmpty()?"Empty\n":"Not Empty\n");break;
            case 6:cout<<(q.isFull()?"Full\n":"Not Full\n");break;
            case 0:cout<<"Exiting\n";break;
            default:cout<<"Invalid\n";
        }
    }while(n!=0);
    return 0;
}
