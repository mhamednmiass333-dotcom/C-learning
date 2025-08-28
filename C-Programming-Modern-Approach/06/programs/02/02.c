#include<stdio.h>

int main()
{
    int sum, num;

    sum = 0;

    printf("This program sums a series of integers.\n");

    printf("Enter integers(0 to terminate) : ");
    scanf("%d", &num);

    while(num){
        sum += num;
        scanf("%d", &num);
    }

    printf("The sum is : %d", sum);

    return 0;
}
