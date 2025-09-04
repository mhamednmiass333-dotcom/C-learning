struct ARRAY{
    int *arr;
    int size;
    int length;
};

int insert(struct ARRAY *p, int value, int index)
{
    if(index < 0 || index > p->length || p->length == p->size)
        return -1;

    for(int i = p->length; i > index; i--)
        p->arr[i] = p->arr[i - 1];
    p->arr[index] = value;
    p->length++;
    return 1;
}
