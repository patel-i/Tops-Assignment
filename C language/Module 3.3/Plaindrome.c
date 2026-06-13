#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[i] = '\0';

    printf("Reversed String = %s\n", rev);

    for(i = 0; i < len; i++) {
        if(str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is Palindrome.\n");
    else
        printf("String is Not Palindrome.\n");
}