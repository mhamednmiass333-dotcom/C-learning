#include<stdio.h>

int main()
{
    double num, sum;
    sum = 0.0;

    printf("This program sums a serie of integers.\n");
    printf("Enter integers (O to terminate) : ");
    do{
        scanf("%lf", &num);
        sum += num;
    }while(num);

    printf("The sum is : %g", sum);

    return 0;
}
