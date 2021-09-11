#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
    {
        int relativeNumber;
        scanf("%d",&relativeNumber);
        int arrayRelative[relativeNumber],arrayCompare[relativeNumber],i=0,j=0,k;

        for(;i<relativeNumber;i++)
        {
            scanf("%d",&arrayRelative[i]);
        }
        int temp;

        for(i=0;i<relativeNumber-1;i++)
        {
            for(j=i+1;j<relativeNumber;j++)
            {
                if(arrayRelative[i]>arrayRelative[j])
                {
                    temp=arrayRelative[i];
                    arrayRelative[i]=arrayRelative[j];
                    arrayRelative[j]=temp;
                }
            }
        }

        j=0;



        for(i=0;i<relativeNumber;i++)
        {
            temp=arrayRelative[i];


            int difference=0,t=0;

            for(k=0;k<relativeNumber;k++)
            {
                if(k==i)
                continue;

                difference=temp-arrayRelative[k];

                if(difference<0)
                difference=difference*(-1);


                t=t+difference;


            }

            arrayCompare[j]=t;
            j++;
        }


        temp=2147483647;
        for(i=0;i<relativeNumber;i++)
        {
            if(arrayCompare[i]<temp)
            temp=arrayCompare[i];
        }

        printf("%d\n",temp);

    }
    return 0;
}
