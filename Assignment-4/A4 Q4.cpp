#include<iostream>
using namespace std;
#define MAX 100
class Queue{
    char arr[MAX];
    int front,rear;
public:
    Queue(){front=rear=-1;}
    bool isEmpty(){return front==-1;}
    void enqueue(char c){
        if(rear==MAX) return;
        if(isEmpty()) front=rear=0; else rear++;
        arr[rear]=c;
    }
    char dequeue(){
        if(isEmpty()) return '\0';
        char x=arr[front];
        if(front==rear) front=rear=-1; else front++;
        return x;
    }
    char getFront(){return isEmpty()?'\0':arr[front];}
};
int main(){
    string s="aabc";   // sample input
    int freq[MAX]={0};
    Queue q;
    char lastNonRepeat='-';
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        freq[ch]++;
        q.enqueue(ch);
        while(!q.isEmpty() && freq[q.getFront()]>1){
            q.dequeue();
        }
        if(q.isEmpty()){
            cout<<"-1 ";
        }else{
            cout<<q.getFront()<<" ";
            lastNonRepeat=q.getFront();
        }
    }
    cout<<"\nFirst non-repeating character is: "<<lastNonRepeat<<endl;
    return 0;
}
