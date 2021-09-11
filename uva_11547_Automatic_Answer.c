#include <stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    for(;c>0 && c<101;)
    {
        long long n,i,k;
        int count=0,j;
        scanf("%lld",&n);
        if(n<-1000 || n> 1000)
        {
            break;
        }
        n=(((((n*567)/9)+7492)*235)/47)-498;
        i=n;
        for(;i!=0 || i!=-0;)
        {
            i=i/10;
            count++;
        }
        j=(count-10);
        for(;j>0;)
        {
            i=n;
            k=i%10;
            i=i/10;
            j--;
            printf("%lld\n",k);
        }

        printf("%lld\n",k);
        c--;
    }

    return 0;
}
