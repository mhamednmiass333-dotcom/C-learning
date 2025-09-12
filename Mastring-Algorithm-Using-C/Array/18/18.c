#include<malloc.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

struct ARRAY * difference(struct ARRAY *p, struct ARRAY *q)
{
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    new->arr = malloc(sizeof(int) * p->length);
    int real_size = 0;
    int i = 0;
    int j = 0;

    for(; i < p->length; i++){
        for(j = 0; j < q->length; j++){
            if(p->arr[i] == q->arr[j])
                break;
        }
        if(j == q->length)
            new->arr[real_size++] = p->arr[i];
    }

    new->length = real_size;
    new->size = real_size;
    new->arr = realloc(new->arr, sizeof(int) * new->length);

    return new;
}

struct ARRAY *difference_sorted(struct ARRAY *p, struct ARRAY *q)
{
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    new->arr = malloc(sizeof(int) * p->length);
    int real_size = 0;
    int i = 0;
    int j = 0;

    for(; i < p->length && j < q->length;){
        if(p->arr[i] == q->arr[j])
            i++, j++;
        else if(p->arr[i] > q->arr[j])
            j++;
        else if(p->arr[i] < q->arr[j])
            new->arr[real_size++] = p->arr[i++];
    }

    for(; i < p->length; i++)
        new->arr[real_size++] = p->arr[i];

    new->length = real_size;
    new->size = real_size;
    new->arr = realloc(new->arr, sizeof(int) * new->length);
    

    return new;
}

