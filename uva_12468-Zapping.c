#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    for(;a!=-1 && b!=-1;)
    {
        int c,d;
        c=(a>b)?a:b;
        d=a+b-c;

        printf("%d\n",(c-d)<abs(c-d-100)?(c-d):abs(c-d-100));

        scanf("%d %d",&a,&b);
    }

    return 0;
}
