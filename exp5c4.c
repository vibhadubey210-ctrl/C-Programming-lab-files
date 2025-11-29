//WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility
#include <stdio.h>
int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;
    int i, j, k;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Reason: Number of columns of A (%d) != Number of rows of B (%d)\n", n, p);
        return 0;
    }
    printf("\nEnter elements of matrix A (%d x %d) in row major order:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of matrix B (%d x %d) in row major order:\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
