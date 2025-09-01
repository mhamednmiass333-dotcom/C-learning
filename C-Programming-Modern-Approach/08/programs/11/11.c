#include<stdio.h>

#define NUMBER 15

int main()
{
    char arr[NUMBER] = {'\0'};
    char ch;
    int i = 0;

    printf("Enter phone number : ");
    while((ch = getchar()) != '\n' && i < NUMBER){
        if(ch >= 'A' && ch <= 'W')
            arr[i] = (ch - 'A' + (ch >= 'Q'))/3 + 2 + '0';
        else
            arr[i] = ch;
        i++;
    }

    printf("In numeric form : ");

    for(int i = 0; i < NUMBER; i++)
        if(arr[i] != '\0')
            printf("%c", arr[i]);

    return 0;
}
