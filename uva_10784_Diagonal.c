#include <stdio.h>
#include <math.h>
int main()
{
    int n1=0;
    long long n,N;
    double d;
    for(;;)
    {
        scanf("%lld",&N);
        if(N==0)
        break;
        d=sqrt(9+8*N);
        d=(3+d)/2;
        n=sqrt(9+8*N);
        n=(3+n)/2;
        if(n!=d)
        n++;
        n1++;
        printf("Case %d: %d\n",n1,n);
    }
    return 0;
}
