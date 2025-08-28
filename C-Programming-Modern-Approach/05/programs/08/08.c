#include<stdio.h>

int main()
{
    int day1, day2, month1, month2, year1, year2;
    int date1, date2;

    printf("Enter First date (mm/dd/yy) : ");
    scanf("%d /%d /%d", &day1, &month1, &year1);

    printf("Enter Second date (mm/dd/yy) : ");
    scanf("%d /%d /%d", &day2, &month2, &year2);

    date1 = day1 + month1*30 + year1*365*30;
    date2 = day2 + month2*30 + year2*365*30;

    if(date1 > date2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", day2, month2, year2, day1, month1, year1);
    else if(date1 < date2) 
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", day1, month1, year1, day2, month2, year2);
    else
        printf("Dates are the same\n");

    return 0;
}
