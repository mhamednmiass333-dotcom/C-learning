struct ARRAY{
    int *arr;
    int size;
    int length;
};

int delete(struct ARRAY *p, int index)
{
    if(index >= p -> length || index < 0)
        return -1;
    for(int i = index; i < p -> length - 1; i++)
        p->arr[i] = p->arr[i+1];
    p->length--;
    return 1;
}
