#include<stdio.h>
#include<stdbool.h>

bool is_prime(int num)
{
    if(num <= 1)
        return false;

    for(int i = 2; i < num; i++)
        if(num % i == 0)
            return false;
    return true;
}

int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    if(is_prime(num))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
