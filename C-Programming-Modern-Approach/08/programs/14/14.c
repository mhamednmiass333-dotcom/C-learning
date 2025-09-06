#include<stdio.h>

#define MAX 100

int main()
{
    char arr[MAX];
    char ch;
    int i = 0;
    int k;

    printf("Enter a sentence : ");
    
    while((ch = getchar()) != '!' && ch != '?'){
        if(i < MAX)
            arr[i++] = ch;
    }
    i--;

    printf("Reversal of sentence : ");

    for(int j = i; j >= 0;){
        for(; arr[i] != ' ' && i >= 0; i--);
        k = i++ - 1;
        for(; i <= j; i++)
            printf("%c", arr[i]);
        i = k;
        j = k;
        printf(" ");
    }

    printf("\n");

    return 0;
}
