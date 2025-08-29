#include<stdio.h>

int main()
{
    int num;
    int reverse = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    do{
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }while(num);

    printf("The reversal : %d\n", reverse);

    return 0;
}
