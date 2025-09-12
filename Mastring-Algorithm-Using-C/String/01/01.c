#include<stdlib.h>

int ft_strlen(const char *s)
{
    if(s == NULL) return 0;

    int len = 0;

    while(s[len] != '\0')
        len++;

    return len;
}

int ft_strlen2(const char *s)
{
    if(s == NULL) return 0;

    if(s[0] == '\0') return 0;

    return 1 + ft_strlen2(s + 1);
}

int ft_strlen3(const char *s)
{
    if(s == NULL) return 0;

    const char *p = s;
    while(*s++ != '\0');

    return s - p - 1;
}

int ft_strlen4(const char *s)
{
    return s && *s ? 1 + ft_strlen4(s + 1) : 0 ;
}
