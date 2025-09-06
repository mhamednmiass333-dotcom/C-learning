struct ARRAY{
    int *arr;
    int length;
    int size;
};

int get(struct ARRAY *p, int index)
{
    if(index >= p->length || index < 0)
        return -1;
    return p->arr[index];
}

int set(struct ARRAY *p, int index, int value)
{
    if(index >= p->length || index < 0)
        return -1;
    p->arr[index] = value;
    return 1;
}

int max(struct ARRAY *p)
{
    int m = p->arr[0];
    for(int i = 1; i < p->length; i++)
        if(m < p->arr[i])
            m = p->arr[i];
    return m;
}

int min(struct ARRAY *p)
{
    int m = p->arr[0];
    for(int i = 1; i < p->length; i++)
        if(m > p->arr[i])
            m = p->arr[i];
    return m;
}
int sum(struct ARRAY *p)
{
    int total = 0;
    for(int i = 0; i < p->length; i++)
        total += p->arr[i];
    return total;
}

int sum_recursion(int *arr, int length)
{
    if(length < 0)
        return 0;
    return sum_recursion(arr, length - 1) + arr[length];
}

int ave(struct ARRAY *p)
{
    int total = 0;
    for(int i = 0; i < p->length; i++)
        total += p->arr[i];
    total /= p->length;
    return total;
}
