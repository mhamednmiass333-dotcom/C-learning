#include<stdio.h>

int main()
{
    int num1, num2, denom1, denom2;
    int num, denom;

    printf("Enter two fractions seperated by plus sign : ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    num = num1 * denom2 + num2 * denom1;
    denom = denom1 * denom2;

    printf("The sum is : %d/%d\n", num, denom);

    return 0;
}
