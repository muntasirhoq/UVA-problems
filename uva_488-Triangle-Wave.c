#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {


        int amplitude,frequency,initialAmp=1,initialFreq=1,i,j,k;
        scanf("%d %d",&amplitude,&frequency);

        int t=0;
        for(;initialFreq<=frequency;initialFreq++)
        {
            if(t)
                printf("\n");
            t=1;
            for(i=1,j=0;i<=2*amplitude-1;i++)
            {
                if(i<=amplitude)
                    j++;
                else
                    j--;

                k=j;
                while(k--)
                    printf("%d",j);
                printf("\n");
            }
            t++;
        }
        if(testCase!=0)
            printf("\n");
    }

    return 0;
}
