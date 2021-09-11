#include <stdio.h>
#include <string.h>

int main()
{
    float x1,y1,x2,y2,x3,y3,mr,mt,centerX,centerY,constant,radius;

    while(scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {

        mr=(y2-y1)/(x2-x1);
        mt=(y3-y2)/(x3-x2);

        if(mr==mt)
        {
            return 0;
        }

        if(mr-mt!=0)
        {
            centerX=mr*mt*(y3-y1)+mr*(x2+x3)-mt*(x1+x2);
            centerX=centerX/2.0/(mr-mt);
        }
        else
            centerX=0;

        if(mr!=0)
        {
            centerY=(-1.0/mr)*(centerX-(x1+x2)/2.0)+(y1+y2)/2.0;
        }
        else
            centerY=0;

        centerX=-centerX;
        centerY=-centerY;

        constant=-(x1*x1+y1*y1+2.0*centerX*x1+2.0*centerY*y1);
        radius=sqrt(centerX*centerX+centerY*centerY-constant);


        if(-centerX>0)
        {
            printf("(x - %.3f)^2 + ",-centerX);
        }
        else if(-centerX==0)
            printf("x^2 + ");
        else if(-centerX<0)
        {
            printf("(x + %.3f)^2 + ",centerX);
        }

        if(-centerY>0)
        {
            printf("(y - %.3f)^2 = %.3f^2\n",-centerY,radius);
        }
        else if(-centerY==0)
            printf("y^2 = %.3f^2\n",radius);
        else if(-centerY<0)
        {
            printf("(y + %.3f)^2 = %.3f^2\n",centerY,radius);
        }



        printf("x^2 + y^2");

        if(centerX>0)
        {
            printf(" + %.3fx",2.0*centerX);
        }
        else if(centerX<0)
        {
            printf(" - %.3fx",-2.0*centerX);
        }

        if(centerY>0)
        {
            printf(" + %.3fy",2.0*centerY);
        }
        else if(centerY<0)
        {
            printf(" - %.3fy",-2.0*centerY);
        }

        if(constant>0)
        {
            printf(" + %.3f",constant);
        }
        else if(constant<0)
        {
            printf(" - %.3f",-constant);
        }


        printf(" = 0\n");
    }

    return 0;
}
