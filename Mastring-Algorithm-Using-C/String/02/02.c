#include<stdbool.h>
#include<stdlib.h>
bool is_upper(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

bool is_lower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

char to_upper(char ch)
{
    return is_lower(ch) ? ch - 32 : ch;
}

char to_lower(char ch)
{
    return is_upper(ch) ? ch + 32 : ch;
}

void toggle_string(char *s)
{
    if(s == NULL) return;

    for(;*s != '\0'; s++){
        if(is_upper(*s))
            *s = to_lower(*s);
        else if(is_lower(*s))
            *s = to_upper(*s);
    }
}
