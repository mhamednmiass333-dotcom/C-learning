#include<stdio.h>

void print_squares(int num);

int main()
{
    int num;

    printf("Enter a number  ");
    scanf("%d", &num);

    printf("Squares from 1 to %d are \n", num);
    print_squares(num);

    return 0;
}

void print_squares(int num)
{
    static int square = 1;

    if(num <= 0)
        return;

    printf("%10d%10d\n", square, square * square);

    square += 1;

    print_squares(num - 1);
}
