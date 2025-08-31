#include<stdio.h>

int power(int m, int n);
int fact(int n);
double e(int x, int n);

int main()
{
    int n, x;
    double taylor;

    printf("Enter the number n :");
    scanf("%d", &n);

    printf("Enter number x : ");
    scanf("%d", &x);

    taylor = e(x, n);

    printf("The value of e^x is : %g", taylor);

    return 0;
}

int power(int m, int n)
{
    if(n == 0)
        return 1;
    if(n % 2 == 0)
        return power(m*m, n/2);
    else
        return m * power(m*m, n/2);
}

int fact(int n)
{
    if(n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}

double e(int x, int n)
{
    if(n == 0)
        return 1;
    return ((double)power(x, n)/fact(n))+e(x, n - 1);
}
