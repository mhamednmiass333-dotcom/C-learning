#include<stdio.h>
#include<stdbool.h>

int main()
{
    int word = 0;
    int character = 0;
    bool is_word = false;
    float average;
    char ch;

    printf("Enter a sentence : ");
    
    while((ch = getchar()) != '\n'){
        if(!is_word && ch != ' '){
            is_word = true;
            word++;
        }
        else if(is_word && ch == ' ')
            is_word = false;
        character += (ch != ' ');
    }

    average = (float)character / word;

    printf("Average word length : %.1f", average);

    return 0;
}
