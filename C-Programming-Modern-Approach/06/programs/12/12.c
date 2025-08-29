#include<stdio.h>

int main()
{
    int num;
    int odd = 5;

    printf("Enter number : ");
    scanf("%d", &num);

    for(int i = 4; i <= num; i += odd, odd += 2, i += odd, odd += 2)
        printf("%d\n", i);

    return 0;
}
