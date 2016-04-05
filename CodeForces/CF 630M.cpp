/// M 换算正角再转个45°，4个区域
#include <stdio.h>
int main()
{
    long long n;
    scanf("%I64d", &n);
    int t = (n%360+405)%360;
    printf("%d\n", t<=90?0:(t-1)/90);
    return 0;
}
