#include<stdio.h>
#include<stdbool.h>

int main()
{
    char c;
    bool check = false;

    printf("Enter message : ");
    while((c = getchar()) != '\n'){
        if(!check){
            printf("In B1FF-speak : ");
            check = true;
        }
        if(c >= 'a' && c <= 'z')
            c = c - 'a' + 'A';
        if(c == 'A')
            c = '4';
        else if(c == 'B')
            c = '8';
        else if(c == 'E')
            c = '3';
        else if(c == 'I')
            c = '1';
        else if(c == 'O')
            c = '0';
        else if(c == 'S')
            c = '5';
        printf("%c", c);
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
