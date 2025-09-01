#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char arr[10][10];
    char ch = 'B';
    srand(time(NULL));
    int direction;
    int position1 = rand() % 10;
    int position2 = rand() % 10;
    int temp1 = position1;
    int temp2 = position2;
    int count = 0;

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            arr[i][j] = '.';
    arr[position1][position2] = 'A';

    for(; ch <= 'Z';){
        if(arr[position1 + 1][position2] != '.' && arr[position1 - 1][position2] != '.' && arr[position1][position2 + 1] != '.' && arr[position1][position2 - 1] != '.')
            break;
    
        if(count > 131)
            break;

        direction = rand() % 4;
        if(direction == 0 && arr[temp1 + 1][temp2] == '.' && temp1 < 9)
            temp1++;
        else if(direction == 1 && arr[temp1 - 1][temp2] == '.' && temp1 > 0)
            temp1--;
        else if(direction == 2 && arr[temp1][temp2 + 1] == '.' && temp2 < 9)
            temp2++;
        else if(direction == 3 && arr[temp1][temp2 - 1] == '.' && temp2 > 0)
            temp2--;

        if((temp1 != position1) || (temp2 != position2)){
            arr[temp1][temp2] = ch;
            ch++;
            position1 = temp1;
            position2 = temp2;
            count = 0;
        }
        count++;
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            printf("%c ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
