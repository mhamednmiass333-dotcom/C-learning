#include<stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m ;

    printf("Enter the first digit : ");
    scanf("%1d", &a);

    printf("Enter the first group of five digits : ");
    scanf("%1d%1d%1d%1d%1d", &b, &c, &d, &e, &f);

    printf("Enter the second group of five digits : ");
    scanf("%1d%1d%1d%1d%1d", &g, &h, &i, &j, &k);

    printf("Enter the last degit : ");
    scanf("%1d", &m);

    l = (a + c + e + g + i + k) * 3;
    l += b + d + f + h + j;
    l -= 1;
    l %= 10;
    l = 9 - l;

    if(m == l)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;

}
