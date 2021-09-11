#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int testCase;
    scanf("%d",&testCase);


    while(testCase--)
    {
        char licensePlate[10];


        scanf("%s",licensePlate);


        int number=0,i,temp,a=0;

        for(i=4;i<=7;i++)
        {
            temp=licensePlate[i]-'0';

            number=number*a+temp;
            a=10;
        }


        int numberChar=0,b;

        temp=2;


        for(i=0;i<3;i++)
        {
            b=licensePlate[i]-65;

            a=temp;

            while(a>0)
            {
                b=b*26;
                a--;
            }
            numberChar=numberChar+b;

            temp--;
        }


        if(abs(number-numberChar)<=100)
        {
            printf("nice\n");
        }

        else
        {
            printf("not nice\n");
        }


    }

    return 0;
}
