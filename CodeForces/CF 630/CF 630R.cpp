/// R 简单博弈，棋盘是n*n的，用中心对称解决
#include <stdio.h>
int main()
{
    long long n;
    scanf("%I64d", &n);
    printf("%d\n", n%2?1:2);
    return 0;
}
