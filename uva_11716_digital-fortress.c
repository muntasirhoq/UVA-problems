#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);
    getchar();

    while(testCase--)
    {
        char input[100000];
        gets(input);

        int length=strlen(input);
        int sq = sqrt(length), i, j;
        if(sq*sq==length )
        {
            for(i=0;i<sq;i++)
            {
                for(j=i;j<length;j+=sq)
                {
                    printf("%c",input[j]);
                }
            }
            printf("\n");
        }

        else
        {
            puts("INVALID");
        }


    }

    return 0;
}
