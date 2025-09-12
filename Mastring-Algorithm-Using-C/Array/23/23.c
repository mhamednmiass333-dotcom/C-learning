#include<malloc.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

struct ARRAY *array_frequency(struct ARRAY *p)
{
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    new->arr = calloc(p->arr[p->length - 1] + 1, sizeof(int));
    new->length = p->arr[p->length - 1];
    new->size = p->arr[p->length - 1];
    
    for(int i = 0 ; i < p->length; i++){
        new->arr[p->arr[i]]++;
    }

    return new;
}
