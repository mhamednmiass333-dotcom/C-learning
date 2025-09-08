#include<stdio.h>
#include<stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main()
{
    int counts1[26] = {0};
    int counts2[26] = {0};

    read_word(counts1);
    read_word(counts2);

    printf("words are ");

    if(equal_array(counts1, counts2))
        printf("anagram\n");
    else
        printf("not anagram\n");

    return 0;
}

void read_word(int counts[26])
{
    char ch;

    printf("Enter the word : ");

    while((ch = getchar()) != '\n'){
        if(ch >= 'a' && ch <= 'z')
            counts[ch - 'a']++;
        if(ch >= 'A' && ch <= 'Z')
            counts[ch - 'A']++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for(int i = 0; i < 26; i++)
        if(counts1[i] != counts2[i])
            return false;
    return true;
}
