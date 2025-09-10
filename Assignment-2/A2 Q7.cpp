#include<iostream>
using namespace std;
int main(){
    int n,inv=0;
    cout<<"Enter size of array:\n";
    cin>>n;
    int A[100];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]) inv++;
        }
    }
    cout<<"Number of inversions = "<<inv;
    return 0;
}
