#include<stdio.h>

int main()
{
    int check[10] = {0};
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    while(num){
        check[num % 10]++;
        num /= 10;
    }

    printf("Repeated digit : ");
    for(int i = 0; i < 10; i++)
        if(check[i] >= 2)
            printf("%d ", i);

    return 0;
}
