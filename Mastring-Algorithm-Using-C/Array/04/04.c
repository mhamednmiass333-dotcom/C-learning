#include<stdio.h>

struct ARRAY{
    int *arr;
    int size;
    int length;
};

void display(struct ARRAY *p)
{
    for(int i = 0; i < p->length; i++)
        printf("%d ", p->arr[i]);
}

void display_recursion(struct ARRAY *p)
{
    static int start = 0;
    if(start == p->length){
        start = 0;
        return;
    }
    printf("%d ", p->arr[start++]);
    return display_recursion(p);
}

void display_reverse(struct ARRAY *p)
{
    for(int i = p->length - 1; i >= 0; i--)
        printf("%d ", p->arr[i]);
}
