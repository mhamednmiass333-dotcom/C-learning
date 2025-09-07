#include<stdbool.h>

struct ARRAY{
    int *arr;
    int length;
    int size;
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int insert_in_sorted(struct ARRAY *p, int num)
{
    if(p->length == p->size)
        return -1;
    int i = p->length - 1;
    while(p->arr[i] > num){
        p->arr[i + 1] = p->arr[i];
        i--;
    }
    p->arr[i + 1] = num;
    p->length++;

    return i;
}

bool is_sorted(struct ARRAY *p)
{
    for(int i = 0; i < p->length - 1; i++)
        if(p->arr[i] > p->arr[i + 1])
            return false;
    return true;
}

void negative_left(struct ARRAY *p)
{
    for(int i = 0, j = p->length - 1; i < j; ){
        for(; p->arr[i] < 0 && i < p->length; i++);
        for(; p->arr[j] > 0 && j >= 0; j--);
        if(i < j)
            swap(&p->arr[i], &p->arr[j]);
    }
}

