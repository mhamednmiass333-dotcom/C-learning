#include<stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l , m;

    printf("Enter the first digit : ");
    scanf("%1d", &a);

    printf("Enter the first group of six digits : ");
    scanf("%1d%1d%1d%1d%1d%1d", &b, &c, &d, &e, &f, &g);

    printf("Enter the second group of five digits : ");
    scanf("%1d%1d%1d%1d%1d", &h, &i, &j, &k, &l);

    m = a + c + e + g + i + k;
    m += (b + d + f + h + j + l) * 3;
    m -= 1;
    m %= 10;
    m = 9 - m;

    printf("The Check digit is %d\n", m);

    return 0;

}
