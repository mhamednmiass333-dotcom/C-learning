#include<stdio.h>

#define FREZZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main()
{
    float fahrenheit, celsius;

    printf("Enter Farenheit temperature : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREZZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent : %.1f\n", celsius);

    return 0;
}
