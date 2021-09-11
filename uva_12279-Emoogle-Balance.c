#include <stdio.h>

int main()
{
    int testCase=0,N;
    scanf("%d",&N);

    for(;N!=0;)
    {
        testCase++;

        int array[N],i=0,answer=0;

        for(;i<N;i++)
        {
            scanf("%d",&array[i]);

            if(array[i]==0){
            answer--;
            continue;}

            else
            answer++;
        }

        printf("Case %d: %d\n",testCase,answer);

        scanf("%d",&N);
    }
    return 0;
}
