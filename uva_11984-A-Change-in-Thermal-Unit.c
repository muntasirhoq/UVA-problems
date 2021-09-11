#include <stdio.h>

int main ()
{
    int testCase,count=0;
    scanf("%d",&testCase);

    while(testCase--)
    {
        count++;
        float Celcius,differenceF;
        double answerC,temp;

        scanf("%f %f",&Celcius,&differenceF);

        Celcius=9.0/5.0*Celcius+32.0;
        temp=Celcius+differenceF;

        answerC=5.0*(temp-32.0)/9.0;


        printf("Case %d: %.2lf\n",count,answerC);
    }
    return 0;
}
