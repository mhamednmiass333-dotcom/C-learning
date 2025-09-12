#include<malloc.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

struct ARRAY *duplicate_elements(struct ARRAY *p)
{
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    new->arr = malloc(sizeof(int) * p->length);
    int real_size = 0;

    for(int i = 0; i < p->length - 1; i++){
        int count = 1;
        if(p->arr[i] != -1){
            for(int j = i + 1; j < p->length; j++)
                if(p->arr[i] == p->arr[j]){
                    p->arr[j] = -1;
                    count++;
                }
        }
        if(count > 1)
            new->arr[real_size++] = p->arr[i];
    }
    new->arr = realloc(new->arr, real_size * sizeof(int));
    new->length = new->size = real_size;

    return new;
}

