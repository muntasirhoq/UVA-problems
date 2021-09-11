#include <stdio.h>

int main()
{
    int lineNumber,test=1;
    scanf("%d",&lineNumber);

    while(lineNumber>=0)
    {
        int copy=1,answer=0;
        for(;copy<lineNumber;)
        {
            copy+=copy;
            answer++;
        }

        printf("Case %d: %d\n",test,answer);

        scanf("%d",&lineNumber);
        test++;
    }

    return 0;
}
