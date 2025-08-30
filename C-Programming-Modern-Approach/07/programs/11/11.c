#include<stdio.h>

int main()
{
    int count_vowel = 0;
    char c;

    printf("Enter a sentence : ");
    while((c = getchar()) != '\n' && c != EOF)
        if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'O' || c == 'o' || c == 'i' || c == 'I' || c == 'u' || c == 'U')
            count_vowel++;

    printf("Your sentence contains %d vowles.\n", count_vowel);

    return 0;
}
