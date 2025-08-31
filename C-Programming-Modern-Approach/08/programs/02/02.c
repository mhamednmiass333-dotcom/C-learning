#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool check[10] = {false};
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(; num > 0; num /= 10){
        if(check[num % 10]){
            printf("Repeated digit");
            return 0;
        }
        check[num % 10] = true;
    }

    printf("No repeated digit\n");

    return 0;
}
