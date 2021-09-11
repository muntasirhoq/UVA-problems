#include <stdio.h>
#include <string.h>

int main()
{
    char numberString[1000];
    gets(numberString);
    for(;;)
    {
        if(strlen(numberString)==1 && numberString[0]=='0')
        break;

        int i,arrayNumber[strlen(numberString)],degree=1;
        long long int number=0,temp=0,loopTemp=0;

        for(i=0;i<strlen(numberString);i++)
        {
            arrayNumber[i]= numberString[i]-'0';
        }

        for(i=0;i<strlen(numberString);i++)
        {
            number=number+arrayNumber[i];
        }


        if(number%9!=0)
        {
            printf("%s is not a multiple of 9.\n",numberString);
            gets(numberString);
            continue;
        }
        for(;number>9;)
        {
            degree++;
            loopTemp=number;
            long long int a=0;
            for(;loopTemp>0;)
            {

                temp=loopTemp%10;
                loopTemp=loopTemp/10;
                a=a+temp;
            }

            number=a;

        }

        printf("%s is a multiple of 9 and has 9-degree %d.\n",numberString,degree);

        gets(numberString);
    }

    return 0;
}
