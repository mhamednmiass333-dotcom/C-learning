#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main()
{
    char arr[10][10];

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            arr[i][j] = '.';

    generate_random_walk(arr);
    print_array(arr);

    return 0;
}

void generate_random_walk(char walk[10][10])
{
    srand(time(NULL));
    int row, column, new_row, new_column, position, count;
    count = 0;
    row = rand() % 10;
    column = rand() % 10;
    new_row = row;
    new_column = column;

    walk[row][column] = 'A';

    for(char ch = 'B'; ch <= 'Z'; ){
        position = rand() % 4;

        if(position == 0)
            new_row--;
        else if(position == 1)
            new_column++;
        else if(position == 2)
            new_row++;
        else
            new_column--;

        if(walk[new_row][new_column] == '.' && (new_row >= 0 && new_row <= 9) && (new_column >= 0 && new_column <= 9)){
            walk[new_row][new_column] = ch;
            ch++;
            row = new_row;
            column = new_column;
            }
        else{
            new_row = row;
            new_column = column;
            count++;
        }

        if(count >= 131)
            return;
        }
 }
void print_array(char walk[10][10])
{
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            printf("%c ", walk[i][j]);
        printf("\n");
    }
}
