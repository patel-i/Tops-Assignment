#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], sub[10][10], mul[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(r1 != r2 || c1 != c2) {
        printf("Addition and Subtraction are not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    /* Addition and Subtraction */
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nAddition of Matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of Matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    /* Multiplication */
    if(c1 == r2) {
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                mul[i][j] = 0;

                for(k = 0; k < c1; k++) {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nMultiplication of Matrices:\n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("\nMultiplication is not possible.\n");
    }

}