#include<malloc.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

struct ARRAY *duplicate_elements(struct ARRAY *p){
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    int real_size = 0;
    int last_duplicate = p->arr[0] - 1;
    new->arr = malloc(sizeof(int) * p->length);

    for(int i = 0; i < p->length - 1; i++)
        if(p->arr[i] == p->arr[i + 1] && p->arr[i] != last_duplicate){
            last_duplicate = p->arr[i];
            new->arr[real_size++] = p->arr[i];
        }

    new->arr = realloc(new->arr, sizeof(int) * real_size);
    new->length = new->size = real_size;

    return new;
}
