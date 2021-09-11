#include <stdio.h>
#include <string.h>

int main()
{
    char countryMain[3000][100];
    int testCase,countryCount[3000],iFull=0;
    scanf("%d",&testCase);
    getchar();
    while(testCase--)
    {
        char input[1000],country[100];
        gets(input);

        int i;

        for(i=0;input[i]!=' ';i++)
        {
            country[i]=input[i];

        }

        country[i]='\0';
        int flag = 0;
        for (i=0;i<=iFull;i++)
        {
            if(strcmp( country,countryMain[i] )==0)
            {
                countryCount[i]++;
                flag = 1;
            }
        }

        if(flag == 0)
        {
            iFull++;
            strcpy(countryMain[iFull] ,country);
            countryCount[iFull] = 1;
        }

        int j,temp1;
        char temp[25];
        for(i=0;i<=iFull;i++)
        {
            for(j=0;j<=iFull-1;j++)
            {
                if(strcmp(countryMain[j],countryMain[j+1])>0)
                {
                    temp1=countryCount[j];
                    countryCount[j]=countryCount[j+1];
                    countryCount[j+1]=temp1;
                    strcpy(temp,countryMain[j]);
                    strcpy(countryMain[j],countryMain[j+1]);
                    strcpy(countryMain[j+1],temp);
                }
            }
        }

    }
    int k;
    for(k=1;k<=iFull;k++)
    {
        printf("%s %d\n", countryMain[k],countryCount[k] );
    }

    return 0;
}
