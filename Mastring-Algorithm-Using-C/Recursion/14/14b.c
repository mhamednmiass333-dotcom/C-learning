#include<stdio.h>

double e(int x, int n);

int main()
{
    int n, x;
    double taylor;

    printf("Enter value n : ");
    scanf("%d", &n);

    printf("Enter value x : ");
    scanf("%d", &x);

    taylor = e(x, n);

    printf("The result of e^x is : %lf\n", taylor);

    return 0;
}

double e(int x, int n)
{
    static int pow = 1, fact = 1;
    double r;

    if(n == 0)
        return 1;

    r = e(x, n - 1);
    pow *= x;
    fact *= n;

    return r + (double)pow/fact;
}
