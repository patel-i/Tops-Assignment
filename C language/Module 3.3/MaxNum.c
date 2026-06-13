#include <stdio.h>

int findMax(int arr[], int size) {
    int i, max = arr[0];

    for(i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[100], n, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = findMax(arr, n);

    printf("Maximum number = %d\n", max);
    
}