#include<stdio.h>

int main()
{
    int height, length, width, volume, weigth ;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weigth = (volume + 165) / 166;

    printf("Dimension : %dx%dx%d\n", length, width, height);
    printf("Volume : %d\n", volume);
    printf("Dimensional weigth : %d\n", weigth);

    return 0;
}
