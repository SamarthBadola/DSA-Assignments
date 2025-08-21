// (a)Code to concatenate two strings
#include <iostream>
using namespace std;
#define MAX 100
int main() {
    char str1[MAX], str2[MAX];
    cout << "Enter first string: ";
    cin.getline(str1, MAX);
    cout << "Enter second string: ";
    cin.getline(str2, MAX);
    int i=0;
    while (str1[i]!='\0') {
        i++;
    }
    int j=0;
    while (str2[j]!='\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
     str1[i]='\0';
    cout << "Concatenated string:\n"<<str1;
    return 0;
}
// (b) Code to reverse string
#include <iostream>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int l=0, j=0;
    while (str[l]!='\0'){
        l++;
    }
      for (int i=0,j=l-1;i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    j=0;
    cout<<"Reversed string: ";
    while (str[j] !='\0'){
        cout<<str[j];
        j++;
    }
    return 0;
    // (c) program to delete all vowels from string
}
