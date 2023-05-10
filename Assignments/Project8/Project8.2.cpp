#include <iostream>
using namespace std;

void readMatrix(int matrix[2][2]);
void writeMatrix(int matrix[2][2]);
void addMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]);
void subMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]);
void mulMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]);

int main(){
    int arr1[2][2], arr2[2][2], result[2][2];
    char operation;

    cout<<"Enter the first matrix: \n";
    readMatrix(arr1);

    cout<<"Enter the second matrix: \n";
    readMatrix(arr2);

    cout<<"Enter the operation to perform (+, -, *): ";
    cin>>operation;

    // using compute matrix
    //compute_matrix(arr1, arr2, result, operation);

    // using individual operators 
    cout << "----- Result -----" << endl;
    switch (operation) {
        case '+':
            addMatrix(arr1,arr2,result);
            //writeMatrix(result);
            break;
        case '-':
            subMatrix(arr1,arr2,result);
            //writeMatrix(result);
            break;
        case '*':
            mulMatrix(arr1, arr2, result);
            //writeMatrix(result);
            break;
        default:
            cout << "Invalid Operation" << endl;
            break;
    }
    writeMatrix(result);

    return 0;
}

// fills out a matrix from user input
void readMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix[i][j];
        }
    }
}

// print a matrix to the console
void writeMatrix(int matrix[2][2]) {
    cout << "[" << matrix[0][0] << ", " << matrix[0][1] << "]" << endl;
    cout << "[" << matrix [1][0] << ", " << matrix [1][1] << "]" << endl;
}

// add two 2X2 matricies 
void addMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// subtract two 2X2 matricies
void subMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j <2; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// multiply two 2X2 matricies
void mulMatrix(int matrix1[2][2], int matrix2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0; // initialize all values in result to zero
            // iterate through the row / column pair
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; // multiply and accumulate products
            }
        }
    }
}

/*
OUTPUT

----------
Enter the first matrix: 
3
5
8
7
Enter the second matrix: 
8
4
5
3
Enter the operation to perform (+, -, *): +
----- Result -----
[11, 9]
[13, 10]

----------
Enter the first matrix: 
3
5
8
7
Enter the second matrix: 
8
4
5
3
Enter the operation to perform (+, -, *): -
----- Result -----
[-5, 1]
[3, 4]

----------
Enter the first matrix: 
3
5
8
7
Enter the second matrix: 
8
4
5
3
Enter the operation to perform (+, -, *): *
----- Result -----
[49, 27]
[99, 53]

*/