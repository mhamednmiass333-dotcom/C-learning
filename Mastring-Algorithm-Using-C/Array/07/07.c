struct ARRAY{
    int *arr;
    int size;
    int length;
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int linear_search(struct ARRAY *p, int key)
{
    for(int i = 0; i < p->length; i++)
        if(key == p->arr[i])
            return i;
    return -1;
}

int transposition(struct ARRAY *p, int key)
{
    for(int i = 0; i < p -> length; i++){
        if(i > 0 && key == p -> arr[i]){
                swap(&p->arr[i], &p->arr[i - 1]);
                return i - 1;
        }
        else if(i == 0 && key == p -> arr[i])
            return i;
    }
    return -1;
}

int move_to_head(struct ARRAY *p, int key)
{
    for(int i = 0; i < p->length; i++){
        if(key == p->arr[i]){
            swap(&p->arr[i], &p->arr[0]);
            return 0;
        }
    }
    return -1;
}

