#include<iostream>
#define MAX 100
using namespace std;
class Stack {
    char arr[MAX];
    int top;
public:
    Stack() { top = -1; }
    void push(char c) {
        if(top==MAX-1) cout<<"Stack Overflow\n";
        else arr[++top]=c;
    }
    char pop() {
        if(top==-1) return '\0';
        return arr[top--];
    }
    char peek() {
        if(top==-1) return '\0';
        return arr[top];
    }
    bool isEmpty() {
        return top==-1;
    }
};
int precedence(char op) {
    if(op=='^') return 3;
    if(op=='*' || op=='/') return 2;
    if(op=='+' || op=='-') return 1;
    return 0;
}
bool isRightAssociative(char op) {
    return op=='^';
}
void infixToPostfix(char infix[], char postfix[]) {
    Stack st;
    int i=0, k=0;
    while(infix[i]!='\0') {
        char c = infix[i];
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')) {
            postfix[k++]=c; // operand
        }
        else if(c=='(') {
            st.push(c);
        }
        else if(c==')') {
            while(!st.isEmpty() && st.peek()!='(') {
                postfix[k++]=st.pop();
            }
            st.pop(); // remove '('
        }
        else { // operator
            while(!st.isEmpty() && precedence(st.peek())>0 &&
                 (precedence(st.peek())>precedence(c) ||
                 (precedence(st.peek())==precedence(c) && !isRightAssociative(c)))) {
                postfix[k++]=st.pop();
            }
            st.push(c);
        }
        i++;
    }
    while(!st.isEmpty()) {
        postfix[k++]=st.pop();
    }
    postfix[k]='\0';
}
int main() {
    char infix[MAX], postfix[MAX];
    cout<<"Enter infix expression: ";
    cin.getline(infix,MAX);
    infixToPostfix(infix,postfix);
    cout<<"Postfix expression: "<<postfix<<endl;
    return 0;
}
