/// N À„À„À„
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double q = sqrt(b*b-4*a*c),
           x1 = (-b+q) / (a<<1),
           x2 = (-b-q) / (a<<1);
    if(a<0) q = x1, x1 = x2, x2 = q;
    printf("%.7f\n%.7f\n", x1, x2);
    return 0;
}
