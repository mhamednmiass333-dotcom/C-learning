#include<stdlib.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

struct ARRAY *ft_union(struct ARRAY *p, struct ARRAY *q)
{
    struct ARRAY *new;
    int real_size = 0;
    int i = 0;
    int j = 0;


    new = malloc(sizeof(struct ARRAY));
    new->size = p->length + q->length;
    new->arr = malloc(sizeof(int) * new->size);
    
    for(; i < p->length; i++)
        new->arr[real_size++] = p->arr[i];

    for(j = 0; j < q->length; j++){
        for(i = 0; i < p->length; i++){
            if(new->arr[i] == q->arr[j])
                break;
            if(i == p->length)
                new->arr[real_size++] = q->arr[j];
        }
    }


    new->arr = realloc(new->arr, real_size * sizeof(int));
    new->size = real_size;
    new->length = real_size;
    return new;
    
}

struct ARRAY *union_sorted(struct ARRAY *p, struct ARRAY *q)
{
    struct ARRAY *new;
    int real_size = 0;
    int i = 0;
    int j = 0;
    new = malloc(sizeof(struct ARRAY));
    new->size = p->length + q->length;
    new->arr = malloc(sizeof(int) * new->size);

    for(; i < p->length && j < q->length;){
        if(p->arr[i] == q->arr[j]){
            new->arr[real_size] = p->arr[i];
            real_size++;
            i++;
            j++;
        }
        else if(p->arr[i] > q->arr[j])
            new->arr[real_size++] = q->arr[j++];
        else if(p->arr[i] < q->arr[j])
            new->arr[real_size++] = p->arr[i++];
    }

    for(; i < p->length; i++)
        new->arr[real_size++] = p->arr[i];

    for(; j < q->length; j++)
        new->arr[real_size++] = p->arr[j];

    new->arr = realloc(new->arr, real_size * sizeof(int));
    new->length = real_size;
    new->size = real_size;

    return new;
}
