#include<stdio.h>

int fibonacci(int n);

int main()
{
    int rank;
    int fib;
    
    printf("Enter the fibonacci rank : ");
    scanf("%d", &rank);

    fib = fibonacci(rank);

    printf("The fibonacci number is : %d", fib);
    return 0;
}

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
