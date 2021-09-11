#include <stdio.h>
int main()
{
    int n,count=1;
    scanf("%d",&n);
    for(;count<=n;)
    {
        int a,b,i=0;
        scanf("%d %d",&a,&b);
        if(a%2==0)
        a=a+1;
        for(;a<=b;)
        {
           i=i+a;
           a=a+2;
        }
        printf("Case %d: %d\n",count,i);
        count++;
    }
    return 0;
}
