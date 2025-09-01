#include<stdio.h>

#define SIZE ((int)(sizeof(arr)/sizeof(arr[0])))
#define MAX 10

int main()
{
    int arr[MAX];

    printf("Enter 10 numbers : ");
    for(int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    printf("In reverse order : ");
    for(int i = SIZE - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
