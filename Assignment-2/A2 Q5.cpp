// (a) Diagonal Matrix
#include <iostream>
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
    return 0;
}
