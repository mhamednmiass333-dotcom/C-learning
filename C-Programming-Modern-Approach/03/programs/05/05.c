#include<stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p ;
    int rsum1, rsum2, rsum3, rsum4;
    int csum1, csum2, csum3, csum4;
    int dsum1, dsum2 ;
    
    printf("Enter the numbers from 1 to 16 in any order : ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    rsum1 = a + b + c + d;
    rsum2 = e + f + g + h;
    rsum3 = i + j + k + l;
    rsum4 = m + n + o + p;

    csum1 = a + e + i + m;
    csum2 = b + f + j + n;
    csum3 = c + g + k + o;
    csum4 = d + h + l + p;

    dsum1 = a + f + k + p;
    dsum2 = m + j + g + d;

    printf("%3d%3d%3d%3d\n", a, b, c, d);
    printf("%3d%3d%3d%3d\n", e, f, g, h);
    printf("%3d%3d%3d%3d\n", i, j, k, l);
    printf("%3d%3d%3d%3d\n", m, n, o, p);

    printf("Row sums : %d %d %d %d\n", rsum1, rsum2, rsum3, rsum4);
    printf("Column sums : %d %d %d %d\n", csum1, csum2, csum3, csum4);
    printf("Diagonal sums : %d %d\n", dsum1, dsum2);

   return 0;

}



