#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter size of array:\n";
    cin>>n;
    int arr[100];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]) break; // duplicate found
        }
        if(j==i) count++; // no duplicate till now → distinct
    }
    cout<<"Total distinct elements = "<<count;
    return 0;
}
