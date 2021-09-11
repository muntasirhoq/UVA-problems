#include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,x3,y1,y2,y3;

    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {
        double dinominator,numerator;
        double circumference;

        numerator= 2*(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2);
        if(numerator<0)
        {
            numerator=numerator* (-1);
        }

        dinominator=sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) * ((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)) * ((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)));

        circumference=2*3.141592653589793*dinominator/numerator;

        printf("%.2lf\n",circumference);
    }
    return 0;
}
