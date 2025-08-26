#include<stdio.h>

int main()
{
    int item_num, day, month, year;
    float unit_price;

    printf("Enter item number : ");
    scanf("%d", &item_num);

    printf("Enter unit price : ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("%d  \t\t$%8.2f\t%.2d/%.2d/%.4d\n", item_num, unit_price, day, month, year);

    return 0;
}
