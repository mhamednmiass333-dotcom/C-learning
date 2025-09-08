#include<stdio.h>

void create_magic(int n, int magic_square[99][99]);
void print_magic(int n, int magic_square[99][99]);

int main()
{
    int num;
    int magic_square[99][99] = {0};

    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square : ");

    scanf("%d", &num);

    if(num % 2 == 0 || num <= 1 || num > 99){
        printf("Invalide input!\n");
        return 0;
    }

    create_magic(num, magic_square);
    print_magic(num, magic_square);

    return 0;
}

void create_magic(int n, int magic_square[99][99])
{
    int row, column, new_row, new_column;
    row = 0;
    column = n / 2;
    new_row = row;
    new_column = column;
    magic_square[row][column] = 1;

    for(int i = 2; i <= n * n; i++){
        if(new_row > 0)
            new_row--;
        else
            new_row = n - 1;
        if(new_column < n - 1)
            new_column++;
        else
            new_column = 0;

        if(magic_square[new_row][new_column] == 0){
            magic_square[new_row][new_column] = i;
            row = new_row;
            column = new_column;
        }
        else{
            row++;
            new_row = row;
            new_column = column;
            magic_square[row][column] = i;
        }
    }
}

void print_magic(int n, int magic_square[99][99])
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            printf("%5d", magic_square[i][j]);
        printf("\n");
    }
}
