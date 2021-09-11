#include <stdio.h>

int main()
{
    int testCase,test=1;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int a,b,c,max,min;
        scanf("%d %d %d",&a,&b,&c);

        max=(a>b)?( a>c?a:c ): (b>c?b:c) ;
        min=(a<b)?( a<c?a:c ): (b<c?b:c) ;

        printf("Case %d: %d\n",test,a+b+c-max-min);

        test++;
    }

    return 0;
}
