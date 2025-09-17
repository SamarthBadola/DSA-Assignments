#include<iostream>
using namespace std;
#define MAX 100
class Queue{
    int arr[MAX],front,rear;
public:
    Queue(){front=rear=-1;}
    bool isEmpty(){return(front==-1);}
    bool isFull(){return((rear+1)%MAX==front);}
    void enqueue(int x){
        if(isFull()){cout<<"FULL\n";return;}
        if(isEmpty()) front=rear=0; else rear=(rear+1)%MAX;
        arr[rear]=x;
    }
    int dequeue(){
        if(isEmpty()){cout<<"EMPTY\n";return -1;}
        int x=arr[front];
        if(front==rear) front=rear=-1; else front=(front+1)%MAX;
        return x;
    }
    int size(){
        if(isEmpty()) return 0;
        if(rear>=front) return rear-front+1;
        return MAX-front+rear+1;
    }
    int getFront(){return isEmpty()?-1:arr[front];}
};
void inter(Queue&q){
    int n=q.size();if(n%2!=0){cout<<"Odd size\n";return;}
    Queue first;int half=n/2;
    for(int i=0;i<half;i++) first.enqueue(q.dequeue());
    while(!first.isEmpty()){
        q.enqueue(first.dequeue());
        q.enqueue(q.dequeue());
    }
}
int main(){
    Queue q;
    q.enqueue(4);q.enqueue(7);q.enqueue(11);q.enqueue(20);q.enqueue(5);q.enqueue(9);
    inter(q);
    while(!q.isEmpty()) cout<<q.dequeue()<<" ";
    return 0;
}
