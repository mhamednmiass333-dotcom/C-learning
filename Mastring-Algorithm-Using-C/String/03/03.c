#include<stdbool.h>
#include<stdlib.h>

bool is_vowel(char ch)
{
    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return true;
        default:
            return false;
    }
}

bool is_consonant(char ch)
{
    return (((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) && !(is_vowel(ch)));
}

void count_vowel_consonant(const char *s, int *vowel, int *consonant)
{
    if(s == NULL) return;

    *vowel = 0;
    *consonant = 0;

    for(; *s != '\0'; s++){
        if(is_vowel(*s))
            (*vowel)++;
        else if(is_consonant(*s))
            (*consonant)++;
    }
}
