#include<stdio.h>
#include<limits.h>

int main()
{
    int min_day, min_month, min_year;
    int day, month, year;
    int min, current;

    min = INT_MAX;

    for(;;){
        printf("Enter a date (mm/dd/yy) : ");
        scanf("%d /%d /%d", &month, &day, &year);
        
        if(day == 0 && month == 0 && year == 0)
            break;

        current = month * 30 + year * 365 * 30 + day;
        if(current < min){
            min_day = day;
            min_month = month;
            min_year = year;
            min = current;
        }
    }

    printf("%2d/%2d/%2d is the earliest day\n", min_month, min_day, min_year);

    return 0;
}

