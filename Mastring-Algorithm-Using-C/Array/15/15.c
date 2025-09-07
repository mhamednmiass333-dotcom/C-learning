#include<malloc.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

struct ARRAY merge_array(struct ARRAY *p, struct ARRAY *q)
{
    int i = 0;
    int j = 0;
    int k = 0;
    struct ARRAY new;
    new.arr = malloc(sizeof(int) * (p->length + q->length));
    new.length = 0;
    new.size = p->length + q->length;

    for(; i < p->length && j < q->length;){
        if(p->arr[i] <= q->arr[j])
            new.arr[k++] = p->arr[i++];
        if(p->arr[i] > q->arr[j])
            new.arr[k++] = q->arr[j++];
    }
    
    for(;i < p->length;i++)
        new.arr[k++] = p->arr[i];
    for(;j < q->length;j++)
        new.arr[k++] = q->arr[i];
    
    new.length = new.size;
     
    return new;
}
            

