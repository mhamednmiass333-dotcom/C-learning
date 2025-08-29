#include<stdio.h>

int GCD(int a, int b);

int main()
{
    int a;
    int b;
    int gcd;

    printf("Enter the 2 numbers : ");
    scanf("%d%d", &a, &b);

    if(a < b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    gcd = GCD(a, b);
    
    printf("The GCD is %d", gcd);

    return 0;
}

int GCD(int a, int b)
{
    if(b == 0)
        return a;
    return GCD(b, a % b);
}
