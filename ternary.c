#include <stdio.h>

int main()
{
    int a, b, c, x, d, p;
    printf("enter the number\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    p = (a < b && a < c && a < d) ? a : ((b < c && b < d) ? b : (c < d ? c : d));
    x = (a > b && a > c && a > d) ? a : ((b > c && b > d) ? b : (c > d ? c : d));
    // p = c < (a < b ? a : b) ? c : ((a < b) ? a : b);
    // x = c > (a > b ? a : b) ? c : ((a > b) ? a : b);
    // p=a>b?a:b;
    //  p=p>c?p:c;
    //   p=c>d?c:d;

    //    x=a<b?a:b;
    //  x=p<c?p:c;
    //   x=c<d?c:d;
    //   printf("smallest num %d",x);
    printf("smallest num %d\n", p);
    printf("largest num %d", x);
}