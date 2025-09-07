#include<stdio.h>

int main()
{
    int arr[99][99] = {0};
    int num;

    int row_position;
    int column_position;
    int row_back;
    int column_back;

    printf("This program creates a magic square of a specific size .\nThe size must be an odd number between 1 and 99\nEnter size of magic square : ");

    scanf("%d", &num);

    if(num > 99 || num <= 0 || num % 2 == 0){
        printf("Invalid input.");
        return 0;
    }


    row_position = 0;
    column_position = num / 2;
    arr[row_position][column_position] = 1;
    row_back = row_position;
    column_back = column_position;

    for(int i = 2; i <= num * num; i++){
        if(row_position > 0)
            row_position--;
        else
            row_position = num - 1;
        
        if(column_position < num - 1)
            column_position++;
        else
            column_position = 0;


        if(arr[row_position][column_position] == 0){
            arr[row_position][column_position] = i;
            row_back = row_position;
            column_back = column_position;
        }
        else{
            arr[++row_back][column_back] = i;
            row_position = row_back;
            column_position = column_back;
        }
    }

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++)
            printf("%7d", arr[i][j]);
        printf("\n");
    }

    return 0;
}
