#include<stdio.h>

int main()
{
    int count = 0;

    printf("Enter a message : ");

    while(getchar() != '\n')
        count++;

    printf("Your message was %d character(s) long\n", count);

    return 0;
}
