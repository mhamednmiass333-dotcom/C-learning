#include<stdio.h>

int main()
{
    int digit1, digit2, digit3;

    printf("Enter the three-digit number : ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    printf("The reverse is : %d%d%d", digit3, digit2, digit1);

    return 0;
}
