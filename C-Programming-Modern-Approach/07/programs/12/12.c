#include<stdio.h>

int main()
{
    char first_name;
    char ch;

    printf("Enter first and last name : ");
    while((first_name = getchar()) == ' ' || first_name == '\t');

    while((ch = getchar()) != ' ' && ch != '\t');

    while((ch = getchar()) == ' ' || ch == '\t');
    
    printf("%c", ch);

    while((ch = getchar()) != '\n')
        printf("%c", ch);

    printf(", %c\n", first_name);

    return 0;
}
