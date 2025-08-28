#include<stdio.h>

int main()
{
    int num;
    int one, ten;

    printf("Enter a two-digit number : ");
    scanf("%d", &num);

    ten = num / 10;
    one = num % 10;

    printf("You entered the number ");
    if(num > 19 || num < 11){
    switch(ten){
        case 1 : printf("Ten"); break;
        case 2 : printf("Twenty-"); break;
        case 3 : printf("Thirty-"); break;
        case 4 : printf("Fourthy-"); break;
        case 5 : printf("Fifty-"); break;
        case 6 : printf("Sixty-"); break;
        case 7 : printf("Seventy-"); break;
        case 8 : printf("Eighty-"); break;
        case 9 : printf("Ninety-"); break;
    }

    switch(one){
        case 1 : printf("one\n"); break;
        case 2 : printf("two\n"); break;
        case 3 : printf("three\n"); break;
        case 4 : printf("four\n"); break;
        case 5 : printf("five\n"); break;
        case 6 : printf("six\n"); break;
        case 7 : printf("seven\n"); break;
        case 8 : printf("eight\n"); break;
        case 9 : printf("nine\n"); break;
    }
    }

    else if(num < 20){
        switch(one){
            case 1 : printf("Eleven\n"); break;
            case 2 : printf("Tweleve\n"); break;
            case 3 : printf("Thirteen\n"); break;
            case 4 : printf("Fourteen\n"); break;
            case 5 : printf("Fifteen\n"); break;
            case 6 : printf("Sixteen\n"); break;
            case 7 : printf("Seventeen\n"); break;
            case 8 : printf("Eighteen\n"); break;
            case 9 : printf("Nineteen\n"); break;
        }
    }

    return 0;
}
