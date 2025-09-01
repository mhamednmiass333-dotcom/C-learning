#include<stdio.h>

int main()
{
    char c;
    int check[10] = {0};

    printf("Enter a number : ");
    while((c = getchar()) != '\n'){
        if(c >= '0' && c <= '9')
            check[c - '0']++;
    }

    printf("Digit :       ");
    for(int i = 0; i < 10; i++)
        printf("%d   ", i);

    printf("\nOccurrences : ");
    for(int i = 0; i < 10; i++)
        printf("%d   ", check[i]);

    return 0;
}
