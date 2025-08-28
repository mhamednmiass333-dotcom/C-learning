#include<stdio.h>

int main()
{
    int grade;
    int tens;

    printf("Enter numerical grade : ");
    scanf("%d", &grade);

    printf("Letter grade : ");
    
    if(grade <= 100 && grade >= 0)
        tens = grade / 10;
    else
        tens = 11;

    switch(tens){
        case 10 : case 9 : printf("A\n"); break;
        case 8 : printf("B\n"); break;
        case 7 : printf("C\n"); break;
        case 6 : printf("D\n"); break;
        case 5 : case 4 : case 3 : case 2 : case 1 : case 0 : printf("F\n"); break;
                                                                    default : printf("Error\n");

        }

    return 0;
}

