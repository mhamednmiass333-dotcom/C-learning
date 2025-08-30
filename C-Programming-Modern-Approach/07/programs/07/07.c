#include<stdio.h>

int main()
{
    int ch;
    int scrabble = 0;

    printf("Enter a word : ");
    while((ch = getchar()) != '\n'){
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';

        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
            scrabble += 1;
        else if(ch == 'D' || ch == 'G')
            scrabble += 2;
        else if(ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
            scrabble += 3;
        else if(ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
            scrabble += 4;
        else if(ch == 'K')
            scrabble += 5;
        else if(ch == 'J' || ch == 'X')
            scrabble += 8;
        else if(ch == 'Q' || ch == 'Z')
            scrabble += 10;
    }

    printf("Scrabble value : %d\n", scrabble);

    return 0;
}
