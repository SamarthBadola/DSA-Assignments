#include<iostream>
using namespace std;
void BinarySearch(int arr[50], int m,int s, int e){
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==m){
            cout<<"the required number has been found at "<<mid+1<<" position";
            break;
        }
        else if(arr[mid]>m){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main(){
    int arr[50];
    int m, s=0,e,n;
    char choice;
    cout<<"enter number of elements you want in array?\n";
    cin>>n;
    e=n;
    cout<<"enter "<<n<<" elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"do you wish to perform binary search?(y/n)\n";
    cin>>choice;
    if(choice=='y'){
        cout<<"what number do you wish to find?\n";
        cin>>m;
        BinarySearch(arr,m,s,e);
    }
    else{
        cout<<"program ended";
    }
    return 0;
}
