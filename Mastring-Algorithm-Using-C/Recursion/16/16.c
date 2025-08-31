#include<stdio.h>

int combination(int n, int r);

int main()
{
    int n, r, c;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter r : ");
    scanf("%d", &r);

    c = combination(n, r);

    printf("The combination is : %d", c);

    return 0;
}

int combination(int n, int r)
{
    if(r == 0 || n == r)
        return 1;
    return combination(n-1, r-1) + combination(n-1, r);
}
