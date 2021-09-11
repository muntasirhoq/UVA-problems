#include <stdio.h>

int main()
{
    long long N,fbee=1,mbee=0,tbee=1;
    int i;
    scanf("%lld",&N);
    while(N!=-1)
    {
        fbee=1,mbee=0,tbee=1;
        for(i=1;i<=N;i++)
        {
            fbee=mbee+1;
            mbee=tbee;
            tbee=mbee+fbee;
        }
        printf("%lld %lld\n",mbee,tbee);
        scanf("%lld",&N);
    }
    return 0;
}
