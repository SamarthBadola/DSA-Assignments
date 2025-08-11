#include<iostream>
using namespace std;
void createArray(int arr[], int &size){
    cout<<"enter number of elements in array= ";
    cin>>size;
    cout<<"enter "<<size<<" elements:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"array created successfully.\n";
}
void displayArray(int arr[], int size){
    cout<<"the current array is:\n";
    for(int i=0;i<size;i++){
        cout<<""<<arr[i]<<endl;
    }
}
void insertElement(int arr[], int &size){
    int pos, el;
    cout<<"at what position do you wish to insert the element: ";
    cin>>pos;
    cout<<"what element do you wish to insert: ";
    cin>>el;
    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=el;
    size++;
    cout<<"element inserted\n";
}
void deleteElement(int arr[], int &size){
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    int k = arr[pos];
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element " << k << " deleted successfully.\n";
}
void linearSearch(int arr[], int &size){
 int el, i;
 cout<<"enter element to search for: ";
 cin>>el;
 for(i=0;i<size;i++){
     if(arr[i]==el){
         cout<<"element found at index"<<i;
         break;
     }
 }
 cout<<"element not found";
}

int main(){
    int i, size, x=1;
    int arr[100];
     cout<<"Welcome to the Array Menu\n";
    while(x!=0){
    cout<< "which operation you wish to perform?"<<endl<<"1. create"<<endl<<"2.display"<<endl<<"3.insert"<<endl<<"4.delete"<<endl<<"5.search"<<endl<<"6.exit\n";
    cin>>i;
    if(i==1){
        createArray(arr,size);
    }
     else if(i==2){
        displayArray(arr,size);
    }
     else if(i==3){
        insertElement(arr,size);
    }
     else if(i==4){
        deleteElement(arr,size);
    }
    else if(i==5){
        linearSearch(arr,size);
    }
    else if(i==6){
        x=0;
    }
    else{
        cout<<"Invalid input given.";
    }
    }
    cout<<"the menu operation has ended.";
    return 0;
}
