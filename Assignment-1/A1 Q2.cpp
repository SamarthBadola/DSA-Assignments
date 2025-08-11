#include<iostream>
using namespace std;
void duplicate(int arr[],int &size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
}
void sort(int arr[], int &size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[50], size;
    cout<<"how many elements you want?\n";
    cin>>size;
    cout<<"enter "<<size<<" elements\n";
    for(int i=0;i<=size;i++){
    cin>>arr[i];
    }
    sort(arr,size);
    cout<<"the sorted array is: ";
    for(int i=0;i<=size;i++){
        cout<<""<<arr[i]<<endl;
    }
    duplicate(arr, size);
      cout<<"the unique array is: ";
    for(int i=0;i<=size;i++){
        cout<<""<<arr[i]<<endl;
    }
    return 0;
}
