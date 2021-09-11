#include <stdio.h>

int main()
{
    int jackCdNumber,jillCdNumber;
    scanf("%d %d",&jackCdNumber,&jillCdNumber);

    for(;jackCdNumber!=0 && jillCdNumber!=0;)
    {
        int arrayJack[jackCdNumber],arrayJill[jillCdNumber],i,j,totalCD=0;

        for(i=0;i<jackCdNumber;i++)
        {
            scanf("%d",&arrayJack[i]);
        }

        for(i=0;i<jillCdNumber;i++)
        {
            scanf("%d",&arrayJill[i]);
        }

        i=0, j=0;
        while(i<jackCdNumber && j<jillCdNumber)
        {
            if(arrayJack[i]==arrayJill[j])
            {
                i++;
                j++;
                totalCD++;
            }
            else if( arrayJack[i] > arrayJill[j]) j++;
            else i++;
        }

        printf("%d\n",totalCD);

        scanf("%d %d",&jackCdNumber,&jillCdNumber);
    }

    return 0;
}
