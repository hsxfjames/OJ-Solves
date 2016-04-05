/// I n辆车在一端2*4*3*4^(n-3)，在中间(n-3)*3*4*3*4^(n-4)
#include <stdio.h>
#include <stdio.h>
long long pow(long long x, int n)
{
    long long res = 1LL;
    while(n) {
        if(n&1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long t = pow(4, n-3);
    long long ans = 24*t;
    if(n>3) ans += 36*(n-3)*(t>>2);
    printf("%I64d\n", ans);
    return 0;
}
