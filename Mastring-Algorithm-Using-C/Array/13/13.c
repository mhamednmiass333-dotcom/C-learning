struct ARRAY{
    int *arr;
    int length;
    int size;
};

void left_rotation_by_n(struct ARRAY *p, int n)
{
    int temp;
    for(int j = 0; j < n; j++){
        temp = p->arr[0];
        for(int i = 0; i < p->length - 1; i++)
           p->arr[i] = p->arr[i + 1];
        p->arr[p->length - 1] = temp;
    }
}

void right_rotation_by_n(struct ARRAY *p, int n)
{
    int temp;
    for(int j = 0; j < n; j++){
        temp = p->arr[p->length - 1];
        for(int i = p->length - 1 ; i > 0; i--)
            p->arr[i] = p->arr[i - 1];
        p->arr[0] = temp;
    }
}
