#include<stdio.h>

int main()
{
    int num;
    int octa = 0;

    printf("Enter a number between 0 and 32767 : ");
    scanf("%d", &num);

    octa += (num % 8);
    num /= 8;

    octa += (num % 8) * 10;
    num /= 8;

    octa += (num % 8) * 100;
    num /= 8;

    octa += (num % 8) * 1000;
    num /= 8;

    octa += (num % 8) * 10000;
    num /= 8;

    printf("The number in octa is : 0%d", octa);

    return 0;
}
