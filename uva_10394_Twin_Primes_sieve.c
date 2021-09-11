#include<stdio.h>
#include<math.h>
#include<stdio.h>
#define MAX 20000000

int p[MAX];

void sieveMethod()
{
    memset(p, 0, sizeof(p));
    p[0] = p[1] = 1;
    int i, j;

    for(i = 4; i < MAX; i += 2)
    {
        p[i] = 1;
    }

    int sq = sqrt(MAX);

    for(i = 3; i < sq; i+=2)
    {
        if(p[i] == 1) continue;
        for(j = i*i; j < MAX; j += 2*i)
        {
            p[j] = 1;
        }
    }

}
int main()
{
    sieveMethod();
    long long int i;
    int primee[110000];
    int x=0,limit;
    for(i=1;i<=MAX;i++)
    {
        if( p[i]==0&&p[i+2]==0 )
        {
            primee[x]=i;
            x++;
        }
    }
    while(scanf("%d",&limit) != EOF)
    {
        long long int prime1,prime2;

        prime1=primee[limit-1];
        prime2=prime1+2;;
        printf("(%lld, %lld)\n",prime1,prime2);
    }
    return 0;
}
