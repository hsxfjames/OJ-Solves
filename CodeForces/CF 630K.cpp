/// K ���ܱ�2-10������2 3 5 7�������ݳ�һ��
#include <stdio.h>
int main()
{
    long long n;
    scanf("%I64d", &n);
    printf("%I64d\n", n-n/2-n/3-n/5-n/7+n/6+n/10+n/14+n/15+n/21+n/35-n/30-n/42-n/70-n/105+n/210);
    return 0;
}