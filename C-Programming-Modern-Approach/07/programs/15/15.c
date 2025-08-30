#include<stdio.h>

int main()
{
    int num;
    float x, y, devision, average;

    devision = 0;
    average = 0;

    printf("Enter positive number : ");
    scanf("%d", &num);

    x = num;
    y = 1;

    do{
        devision = x/y;
        average = (y + devision)/2;
        y = average;
    }while((y - x/y) > 0.000001 || (y - x/y) < -0.000001);

    printf("Square root : %g", y);

    return 0;
}
