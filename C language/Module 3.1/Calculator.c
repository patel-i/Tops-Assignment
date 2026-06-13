#include<stdio.h>
int main(){
    int a,b, choice;
    printf("Enter two number:\n");
    scanf("%d %d", &a , &b);

    printf("1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    printf("5.Moduls \n");
    
    printf("select your choice \n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Addition %d \n",a+b);
            break;
        case 2:
            printf("Subtraction %d \n",a-b);
            break;
        case 3:
            printf("Multiplication %d \n",a*b);
            break;
        case 4:
            printf("Division %d \n",a/b);
            break;
        case 5:
            printf("Moduls %d \n",a/b);
            break;
        default:
            printf("Invalid Choice");
    }
}