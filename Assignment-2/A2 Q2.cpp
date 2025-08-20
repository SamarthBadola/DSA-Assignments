#include<iostream>
using namespace std;
int main(){
    int arr[]={64,34,25,12,22,11,90}, i,j;
    int n=7, temp;
    cout<<"Unsorted array is:\n";
    for(i=0;i<n;i++){
     cout<<arr[i]<<endl;   
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is:\n";
     for(i=0;i<n;i++){
     cout<<arr[i]<<endl;   
    }
}
