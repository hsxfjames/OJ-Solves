/// J 2-10最小公倍数2520，1-n大致有n/2520向下取整个数能被它整除
#include <stdio.h>
int main()
{
    long long n;
    scanf("%I64d", &n);
    printf("%I64d\n", n/2520);
    return 0;
}
