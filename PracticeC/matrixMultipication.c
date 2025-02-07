// write a c program to obtain to user defined matrices and shoew their product if it exists
#include <stdio.h>
#include <stdlib.h>

#define R1 2 // number of rows in Matrix-1
#define C1 2 // number of columns in Matrix-1
#define R2 2 // number of rows in Matrix-2
#define C2 2 // number of columns in Matrix-2

void mulMat(int m1[][C1], int m2[][C2], int rslt[][C2]) {
    if (C1 != R2) {
       printf("Invalid Input");
       return;
    }  
  
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt[i][j] = 0;

            // Changed R2 to C1 for correct multiplication
            for (int k = 0; k < C1; k++) { 
                rslt[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main() {
    int m1[R1][C1] = { { 1, 1 },
                       { 2, 2 } };

    int m2[R2][C2] = { { 1, 1 },
                       { 2, 2 } };

    int rslt[R1][C2]; // Result matrix
  
    // Function call to multiply matrices
    mulMat(m1, m2, rslt);

    // Print the result matrix
    printf("Result matrix is:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%d\t", rslt[i][j]);
        }
        printf("\n");
    }

    return 0;
}