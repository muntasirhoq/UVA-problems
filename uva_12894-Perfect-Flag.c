#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int x,y,x1,y1,cx,cy,r,length,width,count=0;

        scanf("%d %d %d %d %d %d %d",&x,&y,&x1,&y1,&cx,&cy,&r);

        length=cx-x;
        length=(length*10)/4.5;

        width=(cy-y)*2;

        if( (6*length)!=(10*width) )
        {
            count=1;
        }

        if( length/5!=r )
        {
            count=1;
        }

        if( count==0 )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
