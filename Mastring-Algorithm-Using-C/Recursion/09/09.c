#include<stdio.h>

int factorial(int n);

int main()
{
    int num;
    int fact;

    printf("Enter number : ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("The factorial of %d! is %d", num, fact);

    return 0;
}

int factorial(int num)
{
    if(num <= 0)
        return 1;
    return num * factorial(num - 1);
}
