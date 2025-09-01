#include<stdio.h>

int main()
{
    const int scrabble[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch;
    int sum = 0;

    printf("Enter a word : ");
    while((ch = getchar()) != '\n'){
        if(ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
        sum += scrabble[ch - 'a'];
    }

    printf("Scrabble value : %d", sum);

    return 0;
}
