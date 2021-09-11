#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char string[1000];
    int step,i,testCase=1;

    for(;;)
    {
        char direction[200][15];
        int directionStep[200],count=0,j=0;
        scanf("%s",string);

        double x=1e-8,y=1e-8,rootTwo=sqrt(2.0);

        if(strlen(string)==3 && strcmp(string,"END")==0)
            return 0;

        i=0;
        for(;string[i];i++)
        {
            step=0;
            j=0;

            for(;string[i]>='0' && string[i]<='9' && string[i];i++)
            {
                step=step*10+(string[i]-'0');

            }
            directionStep[count]=step;

            for(;(string[i]!=',') &&string[i];i++)
            {
                if(string[i]=='.')
                {
                    break;
                }
                direction[count][j]=string[i];
                j++;
            }
            direction[count][j]='\0';

            if(direction[count][j-1]=='.')
            {
                direction[count][j-1]='\0';
            }

            count++;
        }

        for(i=0;i<count;i++)
        {
            if( strcmp(direction[i],"N")==0 )
            {
                y+=directionStep[i];
            }

            else if( strcmp(direction[i],"E")==0 )
            {
                x+=directionStep[i];
            }

            else if( strcmp(direction[i],"S")==0 )
            {
                y-=directionStep[i];
            }

            else if( strcmp(direction[i],"W")==0 )
            {
                x-=directionStep[i];
            }

            else if( strcmp(direction[i],"NE")==0 )
            {
                x+=(directionStep[i]/rootTwo);
                y+=(directionStep[i]/rootTwo);
            }

            else if( strcmp(direction[i],"SE")==0 )
            {
                x+=(directionStep[i]/rootTwo);
                y-=(directionStep[i]/rootTwo);
            }

            else if( strcmp(direction[i],"SW")==0 )
            {
                x-=(directionStep[i]/rootTwo);
                y-=(directionStep[i]/rootTwo);
            }

            else if( strcmp(direction[i],"NW")==0 )
            {
                x-=(directionStep[i]/rootTwo);
                y+=(directionStep[i]/rootTwo);
            }
        }

        printf("Map #%d\n",testCase);
        testCase++;
        printf("The treasure is located at (%.3lf,%.3lf).\n",x,y);
        printf("The distance to the treasure is %.3lf.\n",sqrt(x*x+y*y));
        printf("\n");

    }

    return 0;
}
