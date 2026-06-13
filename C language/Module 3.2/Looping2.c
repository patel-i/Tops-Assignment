#include<stdio.h>
int main()
{
    int i,num;
    int even = 0, odd = 0;
    int sumofeven = 0, sumofodd = 0; 
    printf("enter 10 numbers: \n");
    
    for ( i = 1; i <= 10; i++){
        scanf("%d",&num);

        if(num%2 == 0){
            even++;
            sumofeven += num; 
        }else{
            odd++;
            sumofodd+= num;
        }
    }

    printf("Even number Count:%d\n",even);
    printf("Odd number Count:%d\n",odd);
    printf("Sum of Even number:%d\n",sumofeven);
    printf("Sum of Odd number:%d\n",sumofodd);
}