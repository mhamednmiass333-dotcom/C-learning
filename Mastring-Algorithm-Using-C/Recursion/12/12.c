#include<stdio.h>

int sum_to_n(int n);

int main()
{
    int num;
    int sum;

    printf("Enter a number : ");
    scanf("%d", &num);

    sum = sum_to_n(num);

    printf("Sum of numbers from 1 to %d is : %d", num, sum);

    return 0;
}

int  sum_to_n(int n)
{
    if(n < 0)
        return sum_to_n(-n);
    if(n == 1)
        return 1;
    return sum_to_n(n - 1) + n;
}
