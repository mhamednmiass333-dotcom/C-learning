#include<stdio.h>

void print_even(int n);
void print_odd(int n);

int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    if(num % 2 == 0)
        print_even(num);
    else
        print_odd(num);

    return 0;
}

void print_even(int n)
{
    if(n < 0)
        return print_even(-n);
    if(n == 0)
        return ;
    printf("%d ", n);
    print_odd(n - 1);
}

void print_odd(int n)
{
    if (n < 0)
        return print_odd(-n);
    if(n == 0)
        return ;
    printf("%d ", n);
    print_even(n - 1);
}
