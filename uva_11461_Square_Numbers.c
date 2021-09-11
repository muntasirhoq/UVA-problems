#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,i,count;
    for(;;)
    {
        scanf("%d %d",&a,&b);
        count=0;
        if(a==0 && b==0)
        break;
        if(a==0 || b==0)
        continue;
        for(i=a;i<=b;i++)
        {
            a=sqrt(i);
            if(a*a==i)
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
