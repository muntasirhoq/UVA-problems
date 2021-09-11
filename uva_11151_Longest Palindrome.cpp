#include <bits/stdc++.h>

using namespace std;

short dp[1002][1002];


int initializeDP()
{
    int i;
    for(i=0;i<1002;i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }
}

int main()
{
    int testCase;
    cin>>testCase;
    getchar();

    initializeDP();

    while(testCase--)
    {
        int i,j,lengthStr,count=0;
        char str1[1010],str2[1010];

        gets(str1);

        lengthStr=strlen(str1);
        j=lengthStr-1;

        for(i=0;i<lengthStr;i++)
        {
            str2[i]=str1[j--];
        }
        str2[i]='\0';

        for(i=0;i<lengthStr;i++)
        {
            for(j=0;j<lengthStr;j++)
            {
                if(str1[i]==str2[j])
                {
                    dp[i+1][j+1]=1+ dp[i][j];
                }
                else
                {
                    dp[i+1][j+1]=max( dp[i+1][j],dp[i][j+1] );
                }
            }
        }

        cout<<dp[lengthStr][lengthStr]<<endl;

    }

    return 0;
}
