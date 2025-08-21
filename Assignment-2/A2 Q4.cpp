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
