#include<stdio.h>

int main()
{
    int num, odd, square;

    printf("This program prints a table of squares.\n");

    printf("Enter number of enteries in table : ");
    scanf("%d", &num);

    odd = 3;
    square = 1;

    for(int i = 1; i <= num; square += odd, odd += 2, i++)
        printf("%d\t\t%d\n", i, square);

    return 0;
}
