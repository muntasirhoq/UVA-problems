#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    while(scanf("%d", &N) != EOF)
    {
        int x=N;
        if (N==1)
        printf("1 is not prime.\n");
        else
        {
            if(N<1 || N>10000000)
            return 0;
            int i=2,count=0;
            for(;i<=sqrt(N);i++)
            {
                if(N%i==0){
                count++;
                break;}
            }
            if (count!=0)
            printf("%d is not prime.\n",N);
            if(N<10 && count==0)
            printf("%d is prime.\n",N);
            else if(count==0)
            {
                if(N>10)
                {
                    int a=N,b=10,c;
                    N=0;
                    for(;a!=0;a/=10)
                    {
                        c=a%10;
                        N=N*b+c;
                    }
                    if(N==x)
                    printf("%d is prime.\n",N);
                    else
                    {
                        i=2,count=0;
                        for(;i<=sqrt(N);i++)
                        {
                            if(N%i==0){
                            count++;
                            break;}
                        }
                        if(count==0)
                        printf("%d is emirp.\n",x);
                        else{
                        printf("%d is prime.\n",x);}
                    }
                }

            }
        }
    }
    return 0;
}
