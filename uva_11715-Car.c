#include<stdio.h>
#include<math.h>

int main()
{
    int count=0,testCase;
    scanf("%d",&testCase);
    while(testCase!=0)
    {
        count++;
        double a,u,v,s,t;
        if(testCase==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",count,s,a);
        }
        else if(testCase==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",count,s,t);
        }
        else if(testCase==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v= sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",count,v,t);
        }
        else if(testCase==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u= sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",count,u,t);
        }
        scanf("%d",&testCase);
    }
    return 0;
}
