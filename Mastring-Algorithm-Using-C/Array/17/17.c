#include<malloc.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

struct ARRAY * intersection(struct ARRAY *p, struct ARRAY *q)
{
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    new->size = q->length;          //or p->length
    new->arr = malloc(sizeof(int) * new->size);
    int real_size = 0;
    int i = 0;
    int j = 0;

    for(i = 0; i < p->length; i++){
        for(j = 0; j < q->length; j++){
            if(p->arr[i] == q->arr[j]){
                new->arr[real_size++] = q->arr[j];
                break;
            }
        }
    }

    new->arr = realloc(new->arr, sizeof(int) * real_size);
    new->size = real_size;
    new->length = real_size;

    return new;
}

struct ARRAY *intersection_sorted(struct ARRAY *p, struct ARRAY *q)
{
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    new->size = q->length;
    new->arr = malloc(sizeof(int) * new->size);
    int real_size = 0;
    int i = 0;
    int j = 0;

    for(; i < p->length && j < q->length;){
        if(p->arr[i] > q->arr[j])
            j++;
        else if(p->arr[i] < q->arr[j])
            i++;
        else{
            new->arr[real_size++] = p->arr[i++];
            j++;
        }
    }

    new->arr = realloc(new->arr, real_size * sizeof(int));
    new->length = real_size;
    new->size = real_size;

    return new;
}
