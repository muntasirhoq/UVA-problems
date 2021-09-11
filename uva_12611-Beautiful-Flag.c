#include <stdio.h>

int main()
{
    int testCase,count=0;
    scanf("%d",&testCase);
    while(testCase--)
    {
        count++;

        int radius,xLeft,xRight,y;
        scanf("%d",&radius);

        xLeft=45*radius/20;
        xRight=55*radius/20;
        y=3*radius/2;

        printf("Case %d:\n",count);
        printf("%d %d\n",-xLeft,y);
        printf("%d %d\n",xRight,y);
        printf("%d %d\n",xRight,-y);
        printf("%d %d\n",-xLeft,-y);
    }
    return 0;
}
