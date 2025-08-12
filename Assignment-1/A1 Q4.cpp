#include<iostream>
using namespace std;
#define M 50
void reversal(int arr[M][M], int &rows, int &col ){
    int total=rows*col;
    for(int i=0;i<total/2;i++){
        int i1=i/col, j1=i%col;
        int i2=(total-1-i)/col, j2=(total-1-i)%col;
         int temp = arr[i1][j1];
        arr[i1][j1] = arr[i2][j2];
        arr[i2][j2] = temp;
    }
}
void multiply(int A[M][M], int B[M][M], int C[M][M], int r1, int c1, int r2, int c2){
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!\n";
        return;
    }
    else{
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    }
}
void transpose(int arr[M][M], int trans[M][M], int &rows, int &col) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            trans[j][i] = arr[i][j];
        }
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
    reversal(arr, rows, col);
    cout << "Reversed array:\n";
    print(arr, rows, col);
    int A[50][50], B[50][50], C[50][50];
    int r1, c1, r2, c2;
    cout << "Enter rows and cols for Matrix A:\n";
    cin >> r1 >> c1;
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];
    cout << "Enter rows and cols for Matrix B:\n";
    cin >> r2 >> c2;
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];
    multiply(A, B, C, r1, c1, r2, c2);
    if (c1 == r2) {
        cout << "Result of multiplication:\n";
        print(C, r1, c2);
    }
    int trans[50][50];
    cout << "Transpose of Matrix A:\n";
    transpose(A, trans, r1, c1);
    print(trans, c1, r1);
    cout << "Transpose of Matrix B:\n";
    transpose(B, trans, r2, c2);
    print(trans, c2, r2);
    return 0;
}
