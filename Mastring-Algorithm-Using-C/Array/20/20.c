#include<malloc.h>

struct ARRAY{
    int *arr;
    int size;
    int length;
};

struct ARRAY *missing_elements(struct ARRAY *p)
{
    struct ARRAY *new = malloc(sizeof(struct ARRAY));
    int real_size = 0;
    new->arr = malloc(sizeof(int) * p->length);
    int diff = p->arr[0];

    for(int i = 1; i < p->length; i++){
        if(p->arr[i] - i != diff){
            while(p->arr[i] - i > diff){
                new->arr[real_size++] = diff + i;
                diff++;
            }
        }
    }

    new->length = new->size = real_size;
    new->arr = realloc(new->arr, real_size);

    return new;
}


