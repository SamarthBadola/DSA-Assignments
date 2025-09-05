// (a) diagonal Matrix
#include<iostream>
#define max 100
using namespace std;
int main(){
    int m[max], n;
    cout<<"what is the size of the matrix?\n";
    cin>>n;
    cout<<"enter "<<n<<" elements of the diagonal matrix\n";
    for(int i=0; i<n;i++){
        cin>>m[i];
    }
    cout<<"The diagonal matrix is\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<" "<<m[j];
            }
            else{
                cout<<" 0";
            }
        }
        cout<<" "<<endl;
    }
    //(b) tri-diagonal matrix
    int size= 3*n-2;
    int t[max];          
    cout<<"Enter "<<size <<" elements of the tri-diagonal matrix\n";
    cout<<"(first " <<n-1<<" sub-diagonal, then "<< n<<" main, then "<< n-1<<" super-diagonal):\n";
    for(int i=0;i< size;i++){
        cin >> t[i];
    }
    cout<<"\nThe tri-diagonal matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-j==1){
                cout <<t[i-1]<<" ";
            } 
            else if(i==j){       
                cout<<t[n-1+i]<<" ";
            }
            else if(j-i==1){      
                cout<<t[2*n-1+i]<<" ";
            } 
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    //(c) Lower Triangular Matrix
    int store=n*(n+1)/2;
    int l[max];
    cout<<"Enter "<<store<<" Values for the lower triangular matrix\n(diagonal first then remaining elements row-wise)\n";
    for(int i=0;i<store;i++){
    cin>>l[i];
    }
    cout<<"Lower triangular Matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<" "<<l[i];
            }
            else if(i>j){
                cout<<" "<<l[n+i*(i-1)/2+j];
            }
            else{
                cout<<" 0";
            }
        }
        cout<<endl;
    }
    return 0;
}
