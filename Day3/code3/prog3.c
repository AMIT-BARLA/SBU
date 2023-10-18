#include <stdio.h>

int main() {
    int rows1= 2, cols1=3, rows2=3, cols2=3;

    // Input dimensions for the first matrix

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1; // Exit with an error code
    }

    // Initialize the matrices
    int mat1[2][3], mat2[3][3], result[2][3];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
