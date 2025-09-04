#include<stdio.h>

/*****************************************************************
*                add element x to the end of the array           *
*****************************************************************/
struct ARRAY{
    int *arr;
    int size;
    int length;
};

int add(int x, struct ARRAY *p)
{
    if(p->length == p->size - 1)
        return 0;
    p->arr[p->length++] = x;
        return 1;
}
