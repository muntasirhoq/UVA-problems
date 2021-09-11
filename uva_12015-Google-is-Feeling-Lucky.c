#include <stdio.h>
#include <string.h>

int main()
{
    int testCase,count1=0;
    scanf("%d",&testCase);
    getchar();

    while(testCase--)
    {
        count1++;

        char webSite[10][500];
        int siteCount[10],i,j;

        //---------------getting input --------------------

        for(i=0;i<10;i++)
        {
            gets(webSite[i]);
        }

        //-------------------separating the numbers-----------

        for (i=0;i<10;i++)
        {
            siteCount[i]=0;
            int a=1;

            for(j=0;webSite[i][j]!=' ';j++ )
            {
            }
            int count=0;
            for (j=j+1;j <strlen(webSite[i]) ;j++)
            {
                if(count>0)
                a=10;
                siteCount[i]=siteCount[i]*a+ (webSite[i][j]-'0');
                count++;
            }
        }

        //--------------finding the maximum number in array

        int max=0;

        for (i=0;i<10;i++)
        {
            if(max<siteCount[i])
            {
                max=siteCount[i];
            }
        }

        //-----------------printing----------

        printf("Case #%d:\n",count1);
        for(i=0;i<10;i++)
        {


            if (siteCount[i]==max)
            {
                for(j=0;webSite[i][j]!=' ';j++)
                {
                    printf("%c",webSite[i][j]);
                }
                printf("\n");
            }
        }

    }
    return 0;
}
