#include<stdio.h>

int main()
{
    long long int num;

    printf("This program print a table of square : ");

    printf("Enter number of entries in table : ");
    scanf("%lld", &num);
    getchar();

    for(long long int  i = 1; i <= num; i++){
        printf("%10lld%10lld\n", i, i*i);
        if(i % 24 == 0){
            printf("Press Enter to coninue...\n");
            while(getchar() != '\n');
        }
    }

    return 0;
}
