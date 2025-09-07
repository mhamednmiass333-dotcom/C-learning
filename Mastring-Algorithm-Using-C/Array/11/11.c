#include<stdlib.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_in_place(struct ARRAY *p)
{
    for(int i = p->length - 1, j = 0; i > j; i--, j++)
        ft_swap(&p->arr[i], &p->arr[j]);
}

void reverse(struct ARRAY *p)
{
    int *brr = malloc(sizeof(int) * p->length);
    for(int i = p->length - 1, j = 0; i >= 0 && j < p->length; i--, j++)
        brr[i] = p->arr[j];

    for(int i = 0; i < p->length; i++)
        p->arr[i] = brr[i];

    free(brr);
}
