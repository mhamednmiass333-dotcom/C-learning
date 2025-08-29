#include<stdio.h>

int count_digit(int num);

int main()
{
    int num;
    int count;

    printf("Enter number : ");
    scanf("%d", &num);

    count = count_digit(num);

    printf("Number of digit(s) : %d", count);

    return 0;
}

int count_digit(int num)
{
    if(num < 0)
        return count_digit(-num);
    if(num / 10 == 0)
        return 1;
    return 1 + count_digit(num / 10);
}
