#include <stdio.h>

int main() {
    int num, rem, max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert negative number to positive
    if(num < 0) {
        num = -num;
    }

    while(num != 0) {
        rem = num % 10;

        if(rem > max) {
            max = rem;
        }

        num = num / 10;
    }

    printf("Maximum digit = %d\n", max);

}