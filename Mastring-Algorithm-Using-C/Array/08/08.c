struct ARRAY{
    int *arr;
    int size;
    int length;
};

int devide(int *arr, int low, int high, int key);



int recursion_sinary_search(struct ARRAY *p, int key)
{
    return devide(p->arr, 0, p->length - 1, key);
}

int devide(int *arr, int low, int high, int key)
{
    int mid = (low + high)/2;
    if(arr[mid] == key)
        return mid;
    if(low > high)
        return -1;
    if(arr[mid] > key)
        return devide(arr, low, mid - 1, key);
    if(arr[mid] < key)
        return devide(arr, mid + 1, high, key);
}

int binary_search(struct ARRAY *p, int key)
{
    int low = 0;
    int high = p->length - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(p->arr[mid] == key)
            return mid;
        if(p->arr[mid] < key)
            low = mid + 1;
        if(p->arr[mid] > key)
            high = mid - 1;
    }
    return -1;
}
        
