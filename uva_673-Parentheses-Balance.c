#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    getchar();

    while(testCase--)
    {
        char inputString[135];
        int i,j,count=0,firstLeft=0,firstRight=0,thirdLeft=0,thirdRight=0;

        gets(inputString);

        for(i=0;i<strlen(inputString);i++)
        {
            if(inputString[i]=='(' && firstLeft>=firstRight )
           {
               firstLeft++;
           }

           else if(inputString[i]==')' && (firstLeft-firstRight)>=1)
           {
               firstRight++;
           }

           else if(inputString[i]=='[' && thirdLeft>=thirdRight)
           {
               thirdLeft++;
           }

           else if(inputString[i]==']' && (thirdLeft-thirdRight)>=1)
           {
               thirdRight++;
           }

           else if( inputString[i]=='(' || inputString[i]==')' || inputString[i]=='[' || inputString[i]==']')
           {
               count=1;
               break;
           }
        }

        if(firstLeft==firstRight && thirdLeft==thirdRight && count==0)
        {
            printf("Yes\n");
        }

        else
        {
            printf("No\n");
        }

    }
    return 0;
}
