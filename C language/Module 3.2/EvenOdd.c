#include<stdio.h>
int main(){
    int num;

    printf("Enter Number:");
    scanf("%d",&num);

    (num % 2 ==0 ) ? printf("%d is Even.\n",num) : printf("%d in Odd.\n",num);
}