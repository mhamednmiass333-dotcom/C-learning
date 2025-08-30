#include<stdio.h>

int main()
{
    long long int num;

    printf("This program print a table of square : ");

    printf("Enter number of entries in table : ");
    scanf("%lld", &num);

    for(long long int  i = 1; i <= num; i++)
        printf("%10lld%10lld\n", i, i*i);

    return 0;
}
