#include<stdio.h>


int main()
{
    int GSI, GI, PC, IN, CD;

    printf("Enter ISBN : ");
    scanf("%d-%d-%d-%d-%d", &GSI, &GI, &PC, &IN, &CD);

    printf("GSI prefix : %d\n", GSI);
    printf("Group identifier : %d\n", GI);
    printf("Publisher code : %d\n", PC);
    printf("Item number : %d\n", IN);
    printf("Check digit : %d\n", CD);

    return 0;
}
