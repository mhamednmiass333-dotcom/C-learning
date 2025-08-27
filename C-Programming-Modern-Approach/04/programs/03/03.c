#include<stdio.h>

int main()
{
    int num;
    int digit1, digit2, digit3;
    int reverse;

    printf("Enter the three-digit number : ");
    scanf("%3d", &num);

    digit1 = num / 100;
    digit2 = num / 10 - digit1 * 10;
    digit3 = num % 10;

    reverse = digit1 + digit2 * 10 + digit3 * 100;

    printf("The reversal : %d\n", reverse);

    return 0;
}

