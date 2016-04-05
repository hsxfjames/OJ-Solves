/// C 等比数列求和2^1+2^2+...+2^n
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%I64d\n", (1LL<<(n+1))-2);
    return 0;
}
