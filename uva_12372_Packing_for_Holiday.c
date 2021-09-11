#include<stdio.h>

int main()
{
    int test,count=1;
    scanf("%d",&test);
    for(;test>0&&test<=100;test--)
    {
        int length,width,height;
        scanf("%d %d %d",&length,&width,&height);
        if((length<1||width<1||height<1) || (length>50||width>50||height>50) )
        return 0;
        if( length>20 || width>20 || height>20 )
        {
            printf("Case %d: bad\n",count);
            count++;
        }
        else
        {
            printf("Case %d: good\n",count);
            count++;
        }
    }
    return 0;
}
