#include <stdio.h>

int main()
{
    int testCase,count=0;
    scanf("%d",&testCase);

    while(testCase--)
    {
        count++;
        int N;
        scanf("%d",&N);

        int cardArray[N],i=0,max=-999;

        for(;i<N;i++)
        {
            scanf("%d",&cardArray[i]);

            if(max<cardArray[i])
            max=cardArray[i];
        }

        printf("Case %d: %d\n",count,max);
    }
    return 0;
}
