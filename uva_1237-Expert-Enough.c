#include <stdio.h>

int main()
{
    int testCase,n=0;
    scanf("%d",&testCase);
    while(testCase--)
    {
        n++;

        int dataBaseCount;
        scanf("%d",&dataBaseCount);

        char makerName[dataBaseCount][25];
        int lowestPrice[dataBaseCount],highestPrice[dataBaseCount],i,j,count=0,queryNumber,index,k=0;

        for(i=0;i<dataBaseCount;i++)
        {
            scanf("%s %d %d",&makerName[i],&lowestPrice[i],&highestPrice[i]);
        }

        scanf("%d",&queryNumber);

        int experimentalPrice[queryNumber];

        for(j=0;j<queryNumber;j++)
        {
            scanf("%d",&experimentalPrice[j]);
        }

        for(i=0;i<queryNumber;i++)
        {
            count=0;
            for(j=0;j<dataBaseCount;j++)
            {
                if(lowestPrice[j]<=experimentalPrice[i] && highestPrice[j]>=experimentalPrice[i])
                {
                    count++;
                    index=j;
                }
            }

            if(count==1)
            {
                printf("%s\n",makerName[index]);
            }
            else
            {
            printf("UNDETERMINED\n");}
        }
        if(testCase) puts("");

    }
    return 0;
}
