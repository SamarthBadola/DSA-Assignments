#include<iostream>
#include<cmath> 
#define MAX 100
using namespace std;
class Stack {
    int arr[MAX];
    int top;
public:
    Stack(){ top=-1; }
    void push(int x){
        if(top==MAX-1) cout<<"Stack Overflow\n";
        else arr[++top]=x;
    }
    int pop(){
        if(top==-1){ cout<<"Stack Underflow\n"; return 0; }
        return arr[top--];
    }
    bool isEmpty(){
        return top==-1;
    }
    int peek(){
        if(top==-1) return -1;
        return arr[top];
    }
};
int evaluatePostfix(char exp[]) {
    Stack st;
    int i=0;
    while(exp[i]!='\0') {
        char c=exp[i];
        if(c>='0' && c<='9'){   
            st.push(c-'0');     
        }
        else {   
            int b=st.pop();
            int a=st.pop();
            switch(c){
                case '+': st.push(a+b); break;
                case '-': st.push(a-b); break;
                case '*': st.push(a*b); break;
                case '/': st.push(a/b); break;
                case '^': st.push(pow(a,b)); break;
            }
        }
        i++;
    }
    return st.pop();
}
int main(){
    char postfix[MAX];
    cout<<"Enter postfix expression (single-digit operands): ";
    cin.getline(postfix,MAX);
    cout<<"Evaluated result: "<<evaluatePostfix(postfix)<<endl;
    return 0;
}
