#include<stdio.h>

double e(int x, int n);

int main()
{
    int n, x;
    double taylor;

    printf("Enter number n : ");
    scanf("%d", &n);

    printf("Enter number x : ");
    scanf("%d", &x);

    taylor = e(x, n);

    printf("The number e^x is : %lf", taylor);

    return 0;
}

double e(int x, int n)
{
    static double s = 1;
    if(n == 0)
        return s;
    s = 1 + (double)x/n * s;
    return e(x, n - 1);
}
