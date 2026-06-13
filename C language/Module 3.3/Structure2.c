#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee emp[5];
    int i;

    /* Input Employee Details */
    for(i = 0; i < 5; i++) {
        printf("\nEnter Details of Employee %d\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &emp[i].empno);

        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].empname);

        printf("Address: ");
        scanf(" %[^\n]", emp[i].address);

        printf("Age: ");
        scanf("%d", &emp[i].age);
    }

    /* Display Employee Details */
    printf("\n\n----- Employee Details -----\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee Number : %d\n", emp[i].empno);
        printf("Employee Name   : %s\n", emp[i].empname);
        printf("Address         : %s\n", emp[i].address);
        printf("Age             : %d\n", emp[i].age);
    }

}