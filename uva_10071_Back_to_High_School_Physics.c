#include <stdio.h>
int main()
{
    int v,t,s;

    while(scanf("%d %d",&v,&t)!=EOF)
    {
        if( (v>=-100&&v<=100) &&(t>=0&&t<=200) )
            {s=v*2*t;
            printf("%d\n",s);}
    }
    return 0;
}
