#include <stdio.h>

int main()
{
    int testcase;
    long int case1=0;
    scanf("%d",&testcase);

    while(testcase--)
    {
        case1++;
        long int N,mile=0,jucy=0,i;
        scanf("%ld",&N);

        int array[N];

        for(i=0;i<N;i++)
        {
            scanf("%ld",&array[i]);
            mile+=(array[i]+30)/30;
            jucy+=(array[i]+60)/60;
        }

        mile*=10;
        jucy*=15;

        if(mile<jucy)
          {
              printf("Case %ld: Mile %ld\n",case1,mile);
          }
          else if(jucy == mile)
          {
             printf("Case %ld: Mile Juice %ld\n",case1,jucy);
          }
          else if(jucy<mile)
          {
              printf("Case %ld: Juice %ld\n",case1,jucy);
          }





    }
}
