#include<stdio.h>

#define LAST_NAME 20

int main()
{
    char name[LAST_NAME] = {'0'};
    char first_name;
    int i = 0;
    char ch;

    printf("Enter a first and last name : ");

    while((first_name = getchar()) == ' ');

    while((ch = getchar()) != ' ');
    while((ch = getchar()) == ' ');
    name[i++] = ch;

    while((ch = getchar()) != '\n')
        if(i < LAST_NAME)
            name[i++] = ch;

    printf("%s, %c\n", name, first_name);

    return 0;
}
