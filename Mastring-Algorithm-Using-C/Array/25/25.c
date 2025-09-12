#include<stdio.h>
#include<malloc.h>

int main()
{
    int size;
    int sum;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int *arr = malloc(sizeof(int) * size);

    printf("Enter the sum : ");
    scanf("%d", &sum);

    printf("Enter the array element(%d) : ", size);
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < size; i++){
        if(arr[i] != -1)
            for(int j = i + 1; j < size; j++){
                if(arr[i] + arr[j] == sum){
                    printf("(%d, %d) ", arr[i], arr[j]);
                    arr[j] = -1;
                    break;
                }
            }
    }

    return 0;
}
