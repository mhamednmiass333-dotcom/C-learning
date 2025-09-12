#include<malloc.h>
#include<stdbool.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

struct ARRAY* missing_elements(struct ARRAY *p)
{
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    new->arr = malloc(sizeof(int) * p->length);
    int real_size = 0;
    int max = p->arr[0];

    for(int i = 1; i < p->length; i++)
        if(max < p->arr[i])
            max = p->arr[i];

    bool *brr = calloc(max, sizeof(int));
    for(int i = 0; i < p->length; i++)
        brr[p->arr[i]]++;

    for(int i = 0; i < max; i++)
        if(!brr[i])
            new->arr[real_size++] = i ;

    new->arr = realloc(new->arr, sizeof(int) * real_size);
    new->length = new->size = real_size;

    return new;
}
