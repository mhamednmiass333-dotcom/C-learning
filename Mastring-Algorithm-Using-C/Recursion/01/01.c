#include<stdio.h>

void print(int n);

int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    print(n);

    return 0;
}

void print(int n)
{
    if(n <= 0){
        printf("Done!");
        return ;
    }
    printf("%d ", n);
    print(n - 1);
}
