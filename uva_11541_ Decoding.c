#include<stdio.h>
#include<string.h>

int main()
{
    int testCase=0,test=0;
    scanf("%d",&testCase);
    getchar();
    while(testCase--)
    {
        test++;
        char input[200],temp;
        int inputLength,outputLength,count=-100,i,k=0;
        gets(input);
        printf("Case %d: ",test);
        inputLength=strlen(input);

        for(i=0;i<inputLength;i++)
        {
            int number,j;

            if(input[i]>='A' && input[i]<='Z')
            {
                count=0;
                number=0;
                temp=input[i];
                continue;
            }

            else if( input[i]>='0' && input[i]<='9' )
            {
                j=input[i]-'0';
                if (count==1)
                {
                    number=number*10+j;
                }
                else if (count==0)
                {
                    number=j;
                }
                count=1;
            }

            if(input[i+1]>='A' && input[i+1]<='Z' || input[i+1]=='\0')
            {
                for(;number>0;number--,k++)
                {
                    printf("%c",temp);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
