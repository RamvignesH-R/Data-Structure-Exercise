#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int rows, cols;

    
    
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    
    int matrix[MAX_SIZE][MAX_SIZE];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    int isIdentity = 1; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0; 
                break;
            } else if (i != j && matrix[i][j] != 0) {
                isIdentity = 0; 
                break;
            }
        }

        if (!isIdentity) {
            break; 
        }
    }

    
    if (isIdentity) {
        printf("The given matrix is an identity matrix.\n");
    } else {
        printf("The given matrix is not an identity matrix.\n");
    }

    return 0;
}
