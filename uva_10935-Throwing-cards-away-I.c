#include <stdio.h>

int main()
{
    int totalCard;
    scanf("%d",&totalCard);

    while(totalCard != 0 )
    {
        int i,cardArray[totalCard],discardedCard[totalCard-1],j=0,x;

        for(i=1;i<=totalCard;i++)
        {
            cardArray[i-1]=i;
        }


        int k=0,m,n;

        for(i=0;i<totalCard;i++)
        {
            discardedCard[j]=cardArray[0];
            j++;

            int temp=cardArray[1];

            for(m=0;m<totalCard-k-2;m++)
            {
                cardArray[m]=cardArray[m+2];
            }



            cardArray[m]=temp;

            cardArray[totalCard-k-1]=discardedCard[j-1];

            k++;

        }
        printf("Discarded cards:");
        int flag=0;
        if(totalCard==2)
        {
            printf(" %d",discardedCard[0]);
        }

        for(i=1;i<totalCard-1;i++)
        {
            if(flag==0){
            printf(" %d",discardedCard[0]);
            flag=1;}
            printf(", %d",discardedCard[i]);
        }

        int addition=0,addition2=0;

        for(i=0;i<totalCard-1;i++)
        {
            addition2=addition2+discardedCard[i];
            addition=addition+cardArray[i];
        }
        addition=addition+cardArray[i];

        printf("\n");
        printf("Remaining card: %d\n",addition-addition2);

        scanf("%d",&totalCard);
    }
    return 0;
}
