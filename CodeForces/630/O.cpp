/// O À„À„À„
#include <stdio.h>
#include <math.h>
int main()
{
    double px, py, vx, vy, a, b, c, d;
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &px, &py, &vx, &vy, &a, &b, &c, &d);
    double l = sqrt(vx*vx+vy*vy), x[7], y[7];
    vx /= l, vy /= l;
    x[0] = px+vx*b,      y[0] = py+vy*b;
    x[1] = px+a/2*(-vy), y[1] = py+a/2*vx;
    x[6] = px+a/2*vy,    y[6] = py+a/2*(-vx);
    x[2] = px+c/2*(-vy), y[2] = py+c/2*vx;
    x[5] = px+c/2*vy,    y[5] = py+c/2*(-vx);
    x[3] = x[2]-vx*d,    y[3] = y[2]-vy*d;
    x[4] = x[5]-vx*d,    y[4] = y[5]-vy*d;
    for(int i=0; i<7; i++)
        printf("%.10f %.10f\n", x[i], y[i]);
    return 0;
}
