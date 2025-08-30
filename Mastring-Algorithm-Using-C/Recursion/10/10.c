#include<stdio.h>

int power_of_two(int num);

int main()
{
    int num;
    int power;

    printf("Enter a number : ");
    scanf("%d", &num);

    power = power_of_two(num);

    printf("The 2^%d is %d", num, power);

    return 0;
}

int power_of_two(int num)
{
    if(num <= 1)
        return 2;
    return power_of_two(num - 1) * 2;
}
