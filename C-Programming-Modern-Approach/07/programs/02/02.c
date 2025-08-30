#include<stdio.h>

int main()
{
    int count = 0;
    char c;

    printf("Enter a message : ");
    while((c = getchar()) != '\n' && c != EOF)
        count++;

    printf("Your message was %d character(s) long.\n", count);

    return 0;
}
