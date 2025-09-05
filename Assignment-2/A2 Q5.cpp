// (a) diagonal Matrix
#include<iostream>
using namespace std;
int main(){
    int m[50], n;
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
    int t[100];          
    cout<<"Enter "<<size <<" elements of the tri-diagonal matrix\n";
    cout<<"(first " <<n-1<<" sub-diagonal, then "<< n<<" main, then "<< n-1<<" super-diagonal):\n";
    for(int i=0;i< size;i++){
        cin >> t[i];
    }
    cout<<"\nThe tri-diagonal matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-j==1){
                cout <<t[i-1]<< " ";
            } 
            else if(i==j){       
                cout<<t[n-1+i]<<" ";
            }
            else if(j-i==1){      
                cout<<t[2*n-1+i]<< " ";
            } 
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
