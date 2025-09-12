struct ARRAY{
    int *arr;
    int length;
    int size;
};

int missing_element_by_sum(struct ARRAY *p)
{
    int sum = (p->arr[p->length - 1]*(p->arr[p->length - 1] + 1))/2;
    int total = 0;

    for(int i = 0; i < p->length; i++)
        total += p->arr[i];

    return sum - total;
}

int missing_element_by_rank(struct ARRAY *p)
{
    int diff = p->arr[0];

    for(int i = 1; i < p->length; i++)
        if((p->arr[i] - i) != diff)
            return i + diff;
}
