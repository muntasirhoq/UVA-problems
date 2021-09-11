#include<stdio.h>

int main()
{
    int testCase,test=0;
    scanf("%d",&testCase);

    while(testCase--)
    {
        test++;
        int numberOfEggs,highestNumberOfEggs,HighestWeightOfEggs,i;

        scanf("%d %d %d",&numberOfEggs,&highestNumberOfEggs,&HighestWeightOfEggs);

        int array[numberOfEggs];
        for(i=0;i<numberOfEggs;i++)
        {
            scanf("%d",&array[i]);
        }

        int weight=0;
         if(highestNumberOfEggs>numberOfEggs)
            {highestNumberOfEggs=numberOfEggs;}

        for(i=0;weight<=HighestWeightOfEggs && i<=highestNumberOfEggs;i++)
        {
            weight+=array[i];
        }

        printf("Case %d: %d\n",test,i-1);

    }

    return 0;
}
