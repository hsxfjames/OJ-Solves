/// M ����������ת��45�㣬4������
#include <stdio.h>
int main()
{
    long long n;
    scanf("%I64d", &n);
    int t = (n%360+405)%360;
    printf("%d\n", t<=90?0:(t-1)/90);
    return 0;
}
