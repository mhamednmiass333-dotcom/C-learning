#include<stdio.h>

#define MAX 10

int main()
{
    int arr[MAX];

    printf("Enter 10 numbers : ");
    for(int i = 0; i < MAX; i++)
        scanf("%d", &arr[i]);

    printf("In reverse order : ");
    for(int i = MAX - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
