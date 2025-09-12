#include<stdbool.h>
#include<stdlib.h>

bool is_space(char ch)
{
    return ch == 32 || (ch >= 9 && ch <= 13);
}

int count_words(const char *s)
{
    if(s == NULL) return 0;
    int count_word = 0;
    bool is_word = false;

    for(; *s != '\0'; s++){
        if(!is_space(*s) && !is_word){
            is_word = true;
            count_word++;
        }

        else if(is_space(*s) && is_word)
            is_word = false;
    }

    return count_word;
}
