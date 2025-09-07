struct ARRAY{
    int *arr;
    int length;
    int size;
};

void left_shift_by_n(struct ARRAY *p, int n)
{
    if(p->length == 0)
            return;
    for(int j = 0; j < n; j++){
        for(int i = 0; i < p->length - 1; i++)
            p->arr[i] = p->arr[i + 1];
        p->arr[p->length - 1] = 0;
    }
}

void right_shift_by_n(struct ARRAY *p, int n)
{
    if(p->length == 0)
        return;
    for(int j = 0; j < n; j++){
        for(int i = p->length - 1; i > 0; i--)
            p->arr[i] = p->arr[i - 1];
        p->arr[0] = 0;
    }
}
