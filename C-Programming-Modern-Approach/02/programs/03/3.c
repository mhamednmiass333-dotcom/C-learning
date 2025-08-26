#include<stdio.h>

int main()
{
    int height, length, width, volume, weigth ;

    printf("Enter the height : ");
    scanf("%d", &height);
    
    printf("Enter the length : ");
    scanf("%d", &length);

    printf("Enter the width : ");
    scanf("%d", &width);

    volume = height * length * width;
    weigth = (volume + 165) / 166;

    printf("Dimension : %dx%dx%d\n", length, width, height);
    printf("Volume : %d\n", volume);
    printf("Dimensional weigth : %d\n", weigth);

    return 0;
}
