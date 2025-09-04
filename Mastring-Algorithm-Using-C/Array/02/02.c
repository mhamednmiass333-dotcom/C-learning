#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m, n;

    printf("Enter number of rows : ");
    scanf("%d", &m);

    printf("Enter number of columns : ");
    scanf("%d", &n);

    int **arr = malloc(sizeof(int *) * m);

    for(int i = 0; i < m; i++)
        arr[i] = malloc(sizeof(int) * n);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            arr[i][j] = 1 + i * n + j;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }

    free(arr);


    return 0;
}
