#include<stdio.h>

int main()
{
    int digit;
    int num = 0;

    printf("Enter a number : ");
    scanf("%d", &digit);

    if(digit / 10 == 0)
        num = 1;

    else if(digit / 100 == 0)
        num = 2;

    else if(digit / 1000 == 0)
        num = 3;

    else
        num = 4;

    printf("The number %d has %d digit(s)", digit, num);

    return 0;
}
