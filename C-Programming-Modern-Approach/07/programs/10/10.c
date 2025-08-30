#include<stdio.h>

int main()
{
    int hour;
    int minute;
    char time;

    printf("Enter a 12-hour time : ");
    scanf("%d:%d\n", &hour, &minute);

    while((time = getchar()) != 'a' && time != 'A' && time != 'p' && time != 'P');
    
    printf("Equivalent 24-hour time : ");

    if((time == 'P' || time == 'p') && hour != 12)
        hour += 12;

    printf("%d:%d\n", hour, minute);

    return 0;
}
