#include<stdio.h>
#include<stdbool.h>

int main() {
    int chars1[26] = {0};
    int chars2[26] = {0};
    char ch;


    printf("Enter first word : ");
    while((ch = getchar()) != '\n'){
        if(ch >= 'a' && ch <= 'z')
            chars1[ch - 'a']++;
        else if(ch >= 'A' && ch <= 'Z')
            chars1[ch - 'a']++;
    }

    printf("Enter second word : ");
    while((ch = getchar()) != '\n'){
        if(ch >= 'a' && ch <= 'z')
            chars2[ch - 'a']++;
        else if(ch >= 'A' && ch <= 'Z')
            chars2[ch - 'a']++;
    }

    printf("The words are ");
    for(int i = 0; i < 26; i++)
        if(chars1[i] != chars2[i]){
            printf("not anagrams\n");
            return 0;
        }

    printf("anagrams\n");
    return 0;
}

