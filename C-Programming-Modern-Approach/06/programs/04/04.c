#include<stdio.h>

int main()
{
    int num;

    printf("This program prints a table of squares.\n");

    printf("Enter number of enteries in table : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
        printf("%d\t\t%d\n", i, i*i);

    return 0;
}
