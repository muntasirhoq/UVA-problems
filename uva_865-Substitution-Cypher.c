#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    getchar();
    getchar();

    while(testCase--)
    {

        int i;
        char plainText[70],substituteText[70],input[70],output[70],stringArray[200];

        for(i=0;i<200;i++)
        {
            stringArray[i]=i;
        }

        gets(plainText);
        gets(substituteText);

        for(i=0;i<strlen(plainText);i++)
        {
            stringArray[plainText[i]]=substituteText[i];
        }
        puts(substituteText);
        puts(plainText);


        while(gets(input))
        {
            if(strcmp(input,"")==0)
                break;
            for(i=0;i<strlen(input);i++)
            {
                output[i]=stringArray[input[i]];
            }
            output[i]='\0';

            puts(output);

        }
        if(testCase)
            printf("\n");
    }
    return 0;
}
