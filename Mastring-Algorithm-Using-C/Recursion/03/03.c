#include<stdio.h>

int sum_to(int num);

int main()
{
    int num;
    int sum;

    printf("Enter number : ");
    scanf("%d", &num);

    sum = sum_to(num);
    printf("sum of numbers from 0 to %d is %d", num, sum);

    return 0;
}

int sum_to(int num)
{
    static int sum = 0;

    if(num <= 0)
        return sum;
    sum += num;
    return sum_to(num - 1);
}

