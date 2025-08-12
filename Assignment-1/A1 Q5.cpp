#include<iostream>
using namespace std;
#define M 50
void addition(int arr[M][M], int &rows, int &col){
    int rsum=0, csum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            rsum+=arr[i][j];
        }
        cout<<"row sum of "<<(i+1)<<" row is "<<rsum<<endl;
        rsum=0;
    }
    for(int j=0;j<col;j++){
        for(int i=0;i<rows;i++){
            csum+=arr[i][j];
        }
        cout<<"column sum of "<<(j+1)<<" row is "<<csum<<endl;
        csum=0;
    }
}
void print(int arr[M][M], int &rows, int &col){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    int arr[M][M], rows, col;
    cout << "Enter rows and cols for array: ";
    cin >> rows >> col;
    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Original array:\n";
    print(arr, rows, col);
    addition(arr, rows, col);
    return 0;
}
