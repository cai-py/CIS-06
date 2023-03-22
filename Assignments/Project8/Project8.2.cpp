#include <iostream>
using namespace std;

void read_matrix(int arr[][2], int rows, int cols){
    cout<<"Enter the elements of the matrix: \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
}

void compute_matrix(int arr1[][2], int arr2[][2], int result[][2], char operation){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(operation == '+'){
                result[i][j] = arr1[i][j] + arr2[i][j];
            }
            else if(operation == '-'){
                result[i][j] = arr1[i][j] - arr2[i][j];
            }
            else if(operation == '*'){
                result[i][j] = arr1[i][j] * arr2[i][j];
            }
        }
    }
}

void write_matrix(int arr[][2], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int arr1[2][2], arr2[2][2], result[2][2];
    char operation;

    cout<<"Enter the first matrix: \n";
    read_matrix(arr1, 2, 2);

    cout<<"Enter the second matrix: \n";
    read_matrix(arr2, 2, 2);

    cout<<"Enter the operation to perform (+, -, *): ";
    cin>>operation;

    compute_matrix(arr1, arr2, result, operation);

    cout<<"Result matrix: \n";
    write_matrix(result, 2, 2);

    return 0;
}
