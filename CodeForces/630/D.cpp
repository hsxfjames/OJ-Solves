/// D 找规律求和1+6+12+18+...+6n
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%I64d\n", 1+3LL*n*(n+1));
    return 0;
}
