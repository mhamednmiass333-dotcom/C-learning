#include<stdio.h>

int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    for(int i = 2; i*i <= num; i += 2)
        printf("%d\n", i*i);

    return 0;
}
