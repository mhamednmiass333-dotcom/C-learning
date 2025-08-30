#include<stdio.h>

int main()
{
    int num1, num2;
    int num3, num4;
    char operation;
    int tmp, cpy1, cpy2;

    printf("Enter a fraction : ");
    scanf("%d/%d%c%d/%d", &num1, &num2, &operation, &num3, &num4);

    if(operation == '+'){
        num1 = num1 * num4 + num3 * num2;
        num2 = num2 * num4;
    }

    else if(operation == '-'){
        num1 = num1 * num4 - num3 * num2;
        num2 = num2 * num4;
    }

    else if(operation == '*'){
        num1 = num1 * num3;
        num2 = num2 * num4;
    }

    else if(operation == '/'){
        num1 = num1 * num4;
        num2 = num2 * num3;
    }

    else{
        printf("Wrong operation\n");
        return 0;
    }


    cpy1 = num1;
    cpy2 = num2;

    if(cpy1 < cpy2){
        tmp = cpy1;
        cpy1 = cpy2;
        cpy2 = tmp;
    }

    while(cpy2){
        tmp = cpy1;
        cpy1 = cpy2;
        cpy2 = tmp % cpy2;
    }

    num1 = num1 / cpy1;
    num2 = num2 / cpy1;

    printf("In lowest terms : %d/%d\n", num1, num2);

    return 0;
}
