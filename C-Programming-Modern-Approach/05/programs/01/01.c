#include<stdio.h>

int main()
{
    float value;
    float commission;

    printf("Enter value of trade : ");
    scanf("%f", &value);

    if(value < 2500)
        commission = 30 + 0.017*value;
    else if(value < 6250)
        commission = 56 + 0.0066*value;
    else if(value < 20000)
        commission = 76 + 0.0034*value;
    else if(value < 50000)
        commission = 100 + 0.0022*value;
    else if(value < 500000)
        commission = 155 + 0.0011*value;
    else
        commission = 255 + 0.0009*value;

    printf("Commission : %g", commission);

    return 0;
}
