#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int fibonacci(int n);
void *malloc_array(int size);

int main()
{
    int rank;
    int fib;

    printf("Enter the fibonacci rank : ");
    scanf("%d", &rank);

    fib = fibonacci(rank);

    printf("The fibnacci number is : %d", fib);

    return 0;
}

int fibonacci(int n)
{
    static bool check = false;
    static int *ptr;
    if(check == false){
        ptr = malloc_array(n);
        check = true;
    }
    if(n <= 1)
        ptr[n] = n;
    
    if(ptr[n] != -1)
        return ptr[n];

    ptr[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return ptr[n];
}

void *malloc_array(int size)
{
    int *ptr = malloc((size + 1) * sizeof(int));
    if(ptr == NULL){
        printf("FAILED TO MALLOC!\n");
        exit(1);
    }
    for(int i = 0; i < size + 1; i++)
        ptr[i] = -1;
    return ptr;
}
