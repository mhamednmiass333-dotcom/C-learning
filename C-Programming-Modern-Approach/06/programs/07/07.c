#include<stdio.h>
#include<limits.h>

int main()
{
    float num, max;
    max = INT_MIN;

    for(;;){

        printf("Enter a number : ");
        scanf("%f", &num);

        if(num == 0)
            break;
        
        if(num > max)
            max = num;
    }

    printf("The largest number entered was %g\n", max);

    return 0;
}
