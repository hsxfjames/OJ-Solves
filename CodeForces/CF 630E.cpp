/// E xjbÕÒ¹æÂÉ
#include <stdio.h>
int main()
{
    long long x1, y1, x2, y2;
    scanf("%I64d%I64d%I64d%I64d", &x1, &y1, &x2, &y2);
    x1 = (x2-x1)>>1;
    y1 = (y2-y1)>>1;
    printf("%I64d\n", x1*y1+(x1+1)*(y1+1));
    return 0;
}
