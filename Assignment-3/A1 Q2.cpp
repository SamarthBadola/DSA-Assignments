#include<iostream>
#include<cstring>
#define MAX 100
using namespace std;
class Stack{
    char s[MAX];
    int top;
public:
    Stack(){ top=-1; }
    void push(char c){
        if(top==MAX-1) cout<<"Stack Overflow\n";
        else s[++top]=c;
    }
    char pop(){
        if(top==-1){
            cout<<"Stack Underflow\n";
            return '\0';
        }
        return s[top--];
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main(){
    char str[MAX];
    cout<<"Enter a string: ";
    cin.getline(str,MAX);
    int len=strlen(str);
    Stack st;
    for(int i=0;i<len;i++) st.push(str[i]);
    cout<<"Reversed string: ";
    while(!st.isEmpty()) cout<<st.pop();
    cout<<"\n";
    return 0;
}
