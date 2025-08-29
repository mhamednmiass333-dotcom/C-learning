#include<stdio.h>

int main()
{
    int num1, num2;
    int tmp;

    printf("Enter two integers : ");
    scanf("%d %d", &num1, &num2);

    if(num1 < num2){
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    while(num2){
        tmp = num1;
        num1 = num2;
        num2 = tmp % num2;
    }

    printf("Greatest common divisor : %d", num1);

    return 0;
}
