#include<stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l = 0;

    printf("Enter all 11 digits : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);

    l += b + d + f + h + j;
    l -= 1;
    l %= 10;
    l = 9 - l;

    printf("The Check digit is %d\n", l);

    return 0;

}
