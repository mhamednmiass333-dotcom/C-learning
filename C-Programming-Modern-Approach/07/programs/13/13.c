#include<stdio.h>

int main()
{
    float result, num;
    char operation;

    printf("Enter an expression : ");
    scanf("%f", &result);

    while((operation = getchar()) != '\n'){
        scanf("%f", &num);
        if(operation == '+')
            result += num;
        else if(operation == '-')
            result -= num;
        else if(operation == '*')
            result *= num;
        else if(operation == '/')
            result /= num;
    }

    printf("Value of expression : %g\n", result);

    return 0;
}
