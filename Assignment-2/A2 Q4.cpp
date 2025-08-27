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
}
// (c) program to delete all vowels from string
#include <iostream>
using namespace std;
#define max 100
int main() {
    char str[max], result[max];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i = 0, j = 0;
    while (str[i] != '\0') {
        char c = str[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            result[j] = c;
            j++;
        }
        i++;
    }
    cout << "String after removing vowels: " << result << endl;
    return 0;
}
// (d) program to sort the strings in alphabetical order.
#include <iostream>
using namespace std;
void SortString(char str[]) {
    int l=0;
    while(str[l]!='\0'){
        l++;
    }
    for(int i=0;i<l-1;i++){
        for (int j=i+1;j<l;j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main() {
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    SortString(str);
    cout<<"String in alphabetical order: "<<str<<endl;
    return 0;
}
// (e) program to convert a character from uppercase to lowercase.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an uppercase character: ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        ch=ch+32;
        cout<<"Lowercase character: "<<ch<<endl;
    } 
    else{
        cout<<"Not an uppercase character."<<endl;
    }
    return 0;
}
