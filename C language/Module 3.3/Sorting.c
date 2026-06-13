#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n1, n2, i, j, temp, choice;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\n1. Ascending Order");
    printf("\n2. Descending Order");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    /* Sorting First Array */
    for(i = 0; i < n1 - 1; i++) {
        for(j = i + 1; j < n1; j++) {
            if((choice == 1 && arr1[i] > arr1[j]) ||
               (choice == 2 && arr1[i] < arr1[j])) {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    /* Sorting Second Array */
    for(i = 0; i < n2 - 1; i++) {
        for(j = i + 1; j < n2; j++) {
            if((choice == 1 && arr2[i] > arr2[j]) ||
               (choice == 2 && arr2[i] < arr2[j])) {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    printf("\nFirst Array after sorting:\n");
    for(i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond Array after sorting:\n");
    for(i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }

}