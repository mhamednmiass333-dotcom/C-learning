#include<stdio.h>

int main()
{
    int hour, minute ;

    printf("Enter a 24-hour : ");
    scanf("%d :%d", &hour, &minute);

    printf("Equivalent 12-hour time : ");

    if(hour > 12)
        printf("%d:%d PM\n", hour - 12, minute);
    else{
        printf("%d:%.2d", hour, minute);
        hour == 12 ? printf("PM\n") : printf("AM\n");
    }
    
    return 0;
}
