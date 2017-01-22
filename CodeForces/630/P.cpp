/// P À„À„À„
#include <stdio.h>
#include <math.h>
const double PI = acos(-1.L);
int main()
{
    double n, r;
    scanf("%lf%lf", &n, &r);
    double A = PI/(2*n), B = PI/n, C = PI-A-B;
    printf("%.8f\n", n*r*r*sin(A)*sin(B)/sin(C));
    return 0;
}
