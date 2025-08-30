#include<stdio.h>

int main()
{
    long num, sum;
    sum = 0;

    printf("This program sums a serie of integers.\n");
    printf("Enter integers (O to terminate) : ");
    do{
        scanf("%ld", &num);
        sum += num;
    }while(num);

    printf("The sum is : %ld", sum);

    return 0;
}
