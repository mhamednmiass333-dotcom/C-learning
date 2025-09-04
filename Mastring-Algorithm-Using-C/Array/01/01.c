#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int size_p = 5;
    int size_q;
    int *q;

    p = malloc(sizeof(int) * 5);

    for(int i = 0; i < size_p; i++)
        p[i] = i + 1;

    printf("with malloc : ");
    for(int i = 0; i < size_p; i++)
        printf("%d ", p[i]);

    printf("\n");

    size_p = 10;
    p = realloc(p, sizeof(int) * 10);

    printf("with realloc : ");
    for(int i = 5; i < size_p; i++)
        p[i] = i + 1;

    for(int i = 0; i < size_p; i++)
        printf("%d ", p[i]);

    size_q = 15;

    printf("\nwith new pointer : ");
    q = malloc(sizeof(int) * size_q);
    for(int i = 0; i < size_p; i++)
        q[i] = p[i];

    for(int i = size_p; i < size_q; i++)
        q[i] = i + 1;

    free(p);
    p = q;
    q = NULL;
    size_p = size_q;
    
    for(int i = 0; i < size_q; i++)
        printf("%d ", p[i]);

    free(p);

    return 0;
}
