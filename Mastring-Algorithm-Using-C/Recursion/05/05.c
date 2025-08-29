#include<stdio.h>

int div(int divisor, int divident);

int main()
{
    int divisor;
    int divident;
    int division;
    
    printf("Enter the divisor : ");
    scanf("%d", &divisor);

    printf("Enter the divident : ");
    scanf("%d", &divident);

    division = div(divisor, divident);

    printf("%d/%d = %d\n",divident, divisor, division);

    return 0;
}

int div(int divisor, int divident)
{
    static int divi = 0;

    if(divident <= 0 || divident < divisor)
        return divi;

    if(divident >= divisor)
        divi++;

    return div(divisor, divident - divisor);
}
