#include<iostream>
#define MAX 100
using namespace std;
int stack[MAX], top=-1, n;
void push(){
    if(top==n-1) cout<<"Stack Overflow\n";
    else{
        int val;
        cout<<"Enter value to push: ";
        cin>>val;
        stack[++top]=val;
        cout<<val<<" pushed.\n";
    }
}
void pop(){
    if(top==-1) cout<<"Stack Underflow\n";
    else cout<<stack[top--]<<" popped.\n";
}
void isEmpty(){
    if(top==-1) cout<<"Stack is empty\n";
    else cout<<"Stack is not empty\n";
}
void isFull(){
    if(top==n-1) cout<<"Stack is full\n";
    else cout<<"Stack is not full\n";
}
void display(){
    if(top==-1) cout<<"Stack is empty\n";
    else{
        cout<<"Stack elements: ";
        for(int i=top;i>=0;i--) cout<<stack[i]<<" ";
        cout<<"\n";
    }
}
void peek(){
    if(top==-1) cout<<"Stack is empty\n";
    else cout<<"Top element is "<<stack[top]<<"\n";
}
int main(){
    cout<<"Enter size of stack: ";
    cin>>n;
    int choice;
    do{
        cout<<"\n--- Stack Menu ---\n";
        cout<<"1.Push\n2.Pop\n3.isEmpty\n4.isFull\n5.Display\n6.Peek\n7.Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: isEmpty(); break;
            case 4: isFull(); break;
            case 5: display(); break;
            case 6: peek(); break;
            case 7: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice!\n";
        }
    }while(choice!=7);
    return 0;
}
