#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    printf("Lumberjacks:\n");

    while(N--)
    {
        int lumberjack[10],i,count=0;

        for(i=0;i<10;i++)
        {
            scanf("%d",&lumberjack[i]);
        }


        if(lumberjack[0]>=lumberjack[1])
        {
            for(i=1;i<9;i++)
            {
                if(lumberjack[i]<lumberjack[i+1])
                {count++;
                break;}
            }
        }

        else
        {
            for(i=1;i<9;i++)
            {
                if(lumberjack[i]>lumberjack[i+1])
                {count++;
                break;}
            }
        }



        if(count==0)
        printf("Ordered\n");
        else
        printf("Unordered\n");
    }

    return 0;
}
