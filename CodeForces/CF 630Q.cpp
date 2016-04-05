/// Q À„À„À„
#include <stdio.h>
#include <math.h>
const double PI = acos(-1.L);
int main()
{
    double l3, l4, l5, res = 0.L;
    scanf("%lf%lf%lf", &l3, &l4, &l5);
    res += sqrt(2.L)*pow(l3,3.L)/12.L;
    res += sqrt(2.L)*pow(l4,3.L)/6.L;
    double t = 1.L/(2.L*tan(.1L*PI)*(1.L+cos(.2L*PI)));
    res += 5.L*cos(.2L*PI)*t*sqrt(1.L-t*t)*l5*l5*l5/6.L;
    printf("%.10f\n", res);
    return 0;
}
