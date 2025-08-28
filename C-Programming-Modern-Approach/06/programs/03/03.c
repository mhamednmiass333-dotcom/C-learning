#include<stdio.h>

int main()
{
    int num;
    int count = 0;

    printf("Enter a nonnegative number : ");
    scanf("%d", &num);

    do{
        count++;
        num /= 10;
    }while(num > 0);

    printf("The number has %d digit(s)", count);

    return 0;
}
