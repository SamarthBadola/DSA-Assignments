#include <iostream>
using namespace std;
int main() {
    int arr[] = {20, 25, 30, 40, 45, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 5;
    cout << "Missing numbers are:\n";
    for (int i=0;i<n-1;i++) {
        int gap=arr[i+1]-arr[i]; 
        if (gap>d){
            int m=(gap/d)-1; 
            for (int j = 1; j <= m; j++) {
                cout << arr[i] + j * d << " ";
            }
        }
    }
    return 0;
}
