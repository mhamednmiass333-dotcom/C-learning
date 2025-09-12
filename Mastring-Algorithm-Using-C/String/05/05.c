#include<stdbool.h>
#include<stdlib.h>

bool is_number(char ch)
{
    return ch >= '0' && ch <= '9';
}

bool is_upper(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

bool is_lower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

bool is_valid(char ch)
{
    return is_upper(ch) || is_lower(ch) || is_number(ch);
}

bool valid_string(const char *s)
{
    if(s == NULL) return false;

    for(; *s != '\0'; s++)
        if(!is_valid(*s))
            return false;
    return true;
}
