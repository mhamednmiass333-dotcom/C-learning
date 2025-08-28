#include<stdio.h>

int main()
{
    int num;
    int i = 1;

    printf("This program prints a table of squares.\n");
    
    printf("Enter number of enteries in table : ");
    scanf("%d", &num);

    while(i <= num){
        printf("%d\t\t%d\n", i, i*i);
        i++;
    }

    return 0;
}

