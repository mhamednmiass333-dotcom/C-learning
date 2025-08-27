#include<stdio.h>

int main()
{
    int num;
    int digit1, digit2;
    int reverse;

    printf("Enter a number of 2 digit : ");
    scanf("%2d", &num);

    digit1 = num % 10;
    digit2 = num / 10;

    reverse = digit1 * 10 + digit2;

    printf("The reverse digit is : %d", reverse);

    return 0;
}
