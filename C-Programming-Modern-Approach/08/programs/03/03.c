#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define MAX_RANK 13
#define MAX_SUIT 4

int main()
{
    const char suit_arr[MAX_SUIT] = {'c', 'd', 'h', 's'};
    const char rank_arr[MAX_RANK] = {'2', '3', '4', '5', '6', '7', '8', '9', '1', 'j', 'q', 'k', 'a'};

    bool in_hande[MAX_SUIT][MAX_RANK] = {false};
    int num;
    int rank;
    int suit;
    srand(time(NULL));

    printf("Enter number of cards in hand : ");
    scanf("%d", &num);

    printf("Your hand : ");
    if(num >= 52){
        for(int i = 0; i < MAX_SUIT; i++){
            for(int j = 0; j < MAX_RANK; j++){
                if(j == 8)
                    printf("%c%d ", suit_arr[i], j + 2);
                else
                    printf("%c%c ", suit_arr[i], rank_arr[j]);
            }
            printf("\n");
        }
            return 0;
    }

    while(num){
            rank = rand() % 13;
            suit = rand() % 4;
            if(!in_hande[suit][rank]){
                num--;
                in_hande[suit][rank] = true;
                printf("%c%c ", rank_arr[rank], suit_arr[suit]);
            }
    }

    return 0;
}
