/// G ���������
/// x����ͬ����Ʒ�ŵ�n�����ӣ�C(x+n-1,x)��C(x+n-1,n-1)
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
    printf("%I64d\n", C(n+4,5)*C(n+2,3));
    return 0;
}
