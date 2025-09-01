#include<stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main()
{
    int max = 0;

    int arr[MAX_ROW][MAX_COL];

    for(int i = 0; i < MAX_ROW; i++){
        printf("Enter row %d : ", i + 1);
        for(int j = 0; j < MAX_COL; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("Row totals : ");
    for(int i = 0; i < MAX_ROW; i++){
        for(int j = 0; j < MAX_COL; j++){
            max += arr[i][j];
        }
        printf("%d ", max);
        max = 0;
    }

    printf("\nColumn totals : ");
    for(int i = 0; i < MAX_COL; i++){
        for(int j = 0; j < MAX_ROW; j++){
            max += arr[j][i];
        }
        printf("%d ", max);
        max = 0;
    }

    return 0;
}
