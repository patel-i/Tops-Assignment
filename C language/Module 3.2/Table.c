#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("\nTable of %d:\n", i);

        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
}