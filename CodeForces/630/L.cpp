/// L 大力模拟不要怂，但题目没保证没前导0
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    n = n-n%10000 + n/100%10*1000 + n%10*100 + n/10%10*10 + n/1000%10;
    long long res = 1LL;
    for(int i=0; i<5; i++) res = res*n%100000;
    printf("%05I64d\n", res);
    return 0;
}
