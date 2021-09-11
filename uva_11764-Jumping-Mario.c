#include<stdio.h>

int main()
{
    int testCase,test=1;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int wall;
        scanf("%d",&wall);

        int array[wall],i,highJump=0,lowJump=0;

        for(i=0;i<wall;i++)
        {
            scanf("%d",&array[i]);
        }

        for(i=0;i<wall-1;i++)
        {
            if(array[i]<array[i+1])
                highJump++;
            else if(array[i]>array[i+1])
                lowJump++;
        }

        printf("Case %d: %d %d\n",test,highJump,lowJump);

        test++;
    }

    return 0;
}
