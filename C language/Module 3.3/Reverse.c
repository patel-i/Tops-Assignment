#include <stdio.h>
#include <string.h>

void reverseString(char str[], int index) {
    if(index < 0)
        return;

    printf("%c", str[index]);
    reverseString(str, index - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Reversed string: ");
    reverseString(str, strlen(str) - 1);

}