/// F 暴力组合数，C(n,5)+C(n,6)+C(n,7)
#include <stdio.h>
long long C(int n, int x)
{
    long long s = 1LL;
    if(n-x>x) x = n-x;
    n -= x;
    for(int i=1; i<=n; i++)
        s=s*(x+i)/i;
    return s;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%I64d\n", C(n,5)+C(n,6)+C(n,7));
    return 0;
}
