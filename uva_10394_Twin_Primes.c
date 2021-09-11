#include<stdio.h>
#include<math.h>

long long int primes(long long int num)
{
    long long int i;
    int count=0;
    for (i=2;i<=sqrt(num);i++)
    {
        if (num%i==0)
        {count++;
        break;}
    }
    if(count==0)
    {
        return num;
    }
    else
    return 0;
}

int main()
{
    int limit;
    while(scanf("%d",&limit) != EOF)
    {
        long long int prime1,prime2,i=2,j,k;
        for(;limit>0;i++)
        {
            j=0;
            j=primes(i);
            if(j!=0)
            {
                j=0;
                k=i+2;
                j=primes(k);
                if(j!=0)
                {
                    limit--;
                }
            }
        }
        prime2=j;
        prime1=j-2;
        printf("(%lld, %lld)\n",prime1,prime2);
    }
    return 0;
}
