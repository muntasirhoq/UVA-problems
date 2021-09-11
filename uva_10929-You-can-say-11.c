#include <stdio.h>
#include <string.h>


int main()
{
    for(;;)
    {
        char number[1000];
        int stringLength,i,additionOdd=0,additionEven=0;

        gets(number);

        if (strlen(number)==1 && number[0]=='0')
        break;

        stringLength=strlen(number);

        for(i=0;i<stringLength;i=i+2)
        {
            additionOdd=additionOdd+(number[i]-'0');
        }

        for(i=1;i<stringLength;i+=2)
        {
            additionEven=additionEven+(number[i]-'0');
        }

        if(additionEven>additionOdd)
        {
            i=additionEven;
            additionEven=additionOdd;
            additionOdd=i;
        }

        if( (additionOdd-additionEven)%11==0 )
        {
            printf("%s is a multiple of 11.\n",number);
            continue;
        }
        printf("%s is not a multiple of 11.\n",number);
    }
    return 0;
}
