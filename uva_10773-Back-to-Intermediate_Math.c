#include<stdio.h>
#include<math.h>

/* shortest path ----
        a= cos^-1(-v/u)

        t=  d/  sqrt (u*u-v*v)

        shortest time
        t=d/u
        */

int main()
{
    int testCase,count=0;
    scanf("%d",&testCase);

    for(;testCase>0;testCase--)
    {
        count++;
        double u,v,d,shortestTime,shortestPath;
        scanf("%lf %lf %lf",&d,&v,&u);

        if(v>=u || u==0 || v==0)
        {
            printf("Case %d: can't determine\n",count);
            continue;
        }

        shortestPath=  d/  sqrt(u*u-v*v);
        shortestTime= d/u;
        if(shortestPath>shortestTime)
        {
            shortestPath=shortestPath-shortestTime;
        }
        else
        {
            shortestPath=shortestTime-shortestTime;
        }

        printf("Case %d: %.3lf\n",count,shortestPath);
    }
    return 0;
}
