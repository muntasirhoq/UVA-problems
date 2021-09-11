#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        char input[1500];
        int i,array[12],setElement,j,remainder,count=0;

        scanf("%s",input);

        scanf("%d",&setElement);

        for(i=0;i<setElement;i++)
        {
            scanf("%d",&array[i]);
        }

        for(j=0;j<setElement;j++)
        {
            remainder = 0;
            for(i = 0; input[i]; i++)
            {
                remainder = (remainder*10 + input[i]-'0')%array[j];
            }

            if(remainder!=0)
            {
                count=1;
                break;
            }
        }

        if(count==0)
        {
            printf("%s - Wonderful.\n",input);
        }
        else
        {
            printf("%s - Simple.\n",input);
        }



    }

    return 0;
}
