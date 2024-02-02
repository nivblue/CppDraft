#include <stdio.h>

#define c_rows 3
#define c_cols 4

void insertValues(int matrix[][50], int rows, int cols) { // TODO : correct 
    int objectvalue;
    int i;
    int j;
    for ( i = 0 ; i < rows ; i++) {
        for( j = 0; j < cols ; j++){
            scanf("%d ", &objectvalue);
            matrix [i][j] = objectvalue;
        }
    }
}

void printMatrix(int matrix[][50],int rows,int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[][50],int oldRows,int oldCols) {
    int i, j;
    for (i = 0; i < oldRows; i++) {
        for (j = 0; j < oldCols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


// int* matrixMultiply(int firstMatrix[][50], int secondMatrix[][50], int rows, int cols);
// int rowsMultiply(int firstRow[50], int secondRow[50], int rowLength);

// int* matrixPow(int matrix[][50], int rows, int cols, int powLevel) {
//     int i,j;
//     int resultMatrix[][50] = {1};
//     for (i = 1; i < powLevel; i++) {
//         resultMatrix = matrixMultiply(resultMatrix, matrix, rows, cols);
//     }

//     return resultMatrix;
// }

// int* matrixMultiply(int firstMatrix[][50], int secondMatrix[][50], int rows, int cols) {
//     int i,j;
//     int resultMatrix[][50] = {0};
//     for (i = 0; i < rows; i++) {
//         for (j = 0; j < cols; j++) {
//             resultMatrix[i][j] = rowsMultiply(firstMatrix[i], secondMatrix[i], cols);
//         }
//     }

//     return resultMatrix;
// }

// int rowsMultiply(int firstRow[50], int secondRow[50], int rowLength) {
//     int i;
//     int sum = 0;
//     for (i = 0; i < rowLength; i++) {
//         sum += (firstRow[i] * secondRow[i]);
//     }

//     return sum;
// }
