/// B 输出1.000000011的t次方乘以n，误差不超过1E-6
#include <stdio.h>
#include <math.h>
int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    printf("%.7f\n", n*pow(1.000000011L,t));
    return 0;
}
