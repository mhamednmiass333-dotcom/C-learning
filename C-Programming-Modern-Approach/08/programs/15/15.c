#include<stdio.h>

int main()
{
    char ch;
    int num;
    int check = 0;
    printf("Enter shift amount : ");
    scanf("%d", &num);
    getchar();

    printf("Enter message to be encrypted : ");

    while((ch = getchar()) != '\n'){
        if(check == 0){
            printf("Encrypted message : ");
            check++;
        }

        if(ch >= 'a' && ch <= 'z')
            ch = ((ch - 'a') + num) % 26 + 'a';
        else if(ch >= 'A' && ch <= 'Z')
            ch = ((ch - 'A') + num) % 26 + 'A';
        printf("%c", ch);
    }

    return 0;
}
