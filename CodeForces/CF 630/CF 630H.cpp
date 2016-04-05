/// H 先选n行，再选n列：C(n,5)*A(n,5)
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
    printf("%I64d\n", C(n,5)*n*(n-1)*(n-2)*(n-3)*(n-4));
    return 0;
}
