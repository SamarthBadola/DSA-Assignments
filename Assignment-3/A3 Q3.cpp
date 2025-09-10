#include<iostream>
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
        if(top==-1) return '\0';
        return s[top--];
    }
    char peek(){
        if(top==-1) return '\0';
        return s[top];
    }
    bool isEmpty(){
        return top==-1;
    }
};
bool isMatching(char open, char close){
    return (open=='(' && close==')') ||
           (open=='{' && close=='}') ||
           (open=='[' && close==']');
}
bool checkBalanced(char exp[]){
    Stack st;
    int i=0;
    while(exp[i]!='\0'){
        char c=exp[i];
        if(c=='(' || c=='{' || c=='['){
            st.push(c);
        }
        else if(c==')' || c=='}' || c==']'){
            if(st.isEmpty()) return false;
            char top=st.pop();
            if(!isMatching(top,c)) return false;
        }
        i++;
    }
    return st.isEmpty();
}
int main(){
    char exp[MAX];
    cout<<"Enter an expression: ";
    cin.getline(exp,MAX);
    if(checkBalanced(exp))
        cout<<"Balanced\n";
    else
        cout<<"Not Balanced\n";
    return 0;
}
