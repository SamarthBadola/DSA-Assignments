#include<iostream>
using namespace std;
void SelectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){ 
        int min= i;
        for(int j= i+1;j<n;j++){ 
            if(a[j] < a[min]){
                min= j;
            }
        }
        if(min!= i){
          int temp;
          temp = a[min];
          a[min] = a[i];
          a[i] = temp;
        }
    }
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int b[100];
    for(int i = 0; i < n; i++){
        cout<<"Enter element " << i + 1 << ": ";
      cin>>b[i];  
    }
    cout<<"Unsorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    SelectionSort(b, n); 
    cout<<"Sorted array is:"<< endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
