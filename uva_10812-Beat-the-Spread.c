#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        long long int s,d,a,b;

        scanf("%lld %lld",&s,&d);

        if(s<d ||s<0 || d<0 || (d+s)%2==1)
        {
            printf("impossible\n");
        }
        else
        {
            a=(s+d)/2;
            b=(s-d)/2;
            printf("%lld %lld\n",a,b);
        }
    }

    return 0;
}
