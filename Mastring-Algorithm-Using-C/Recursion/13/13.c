#include<stdio.h>

int ft_pow(int m, int n);

int main()
{
    int base, exponent;
    int power;

    printf("Enter the operation base^exponent : ");
    scanf("%d ^%d", &base, &exponent);

    power = ft_pow(base, exponent);

    printf("%d^%d = %d\n", base, exponent, power);

    return 0;
}

int ft_pow(int m, int n)
{
    if(n == 0)
        return 1;
    return m * ft_pow(m, n - 1);
}
