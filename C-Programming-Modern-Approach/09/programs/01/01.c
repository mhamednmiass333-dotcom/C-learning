#include<stdio.h>

double average(double a, double b)
{
    return (a + b)/2;
}

int main()
{
    double num1, num2, num3;
    
    printf("Enter three numbers : ");
    scanf("%lf%lf%lf", &num1, &num2, &num3);

    printf("Average of %g and %g : %g\n", num1, num2, average(num1, num2));
    printf("Average of %g and %g : %g\n", num2, num3, average(num3, num2));
    printf("Average of %g and %g : %g\n", num1, num3, average(num1, num3));

    return 0;
}
