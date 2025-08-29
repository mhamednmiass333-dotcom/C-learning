#include<stdio.h>

int main(){
    int days;
    int start_day;
    int j = 1;
    printf("Enter number of days in month : ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sum, 7=Sat) : ");
    scanf("%d", &start_day);

    for(; j < start_day; j++)
        printf("   ");
    j--;

    for(int i = 1; i <= days; i++){
        printf("%3d", i);
        if((i + j) % 7 == 0)
            printf("\n");
    }

    return 0;
}
    
