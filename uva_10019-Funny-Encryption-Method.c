#include <stdio.h>

int binaryConversion(num)
{
    int totalOne=0,a;

    for(;num!=0;)
    {
        a=num % 2;
        num=num / 2;
        if(a==1)
        totalOne++;
    }
    return totalOne;
}

int hexaDecimalConversion(num)
{
    int totalOne=0,a;
    for(;num!=0;)
    {
        a=num%10;
        if(a==1 || a==4 || a==8 || a==2)
        totalOne++;
        if(a==3||a==5||a==9||a==6)
        totalOne+=2;
        if(a==7)
        totalOne+=3;
        num=num/10;
    }
    return totalOne;
}

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int number,decimalOne=0,hexaOne=0,temp;

        scanf("%d",&number);

        temp=number;

        decimalOne=binaryConversion(temp);
        hexaOne=hexaDecimalConversion(temp);

        printf("%d %d\n",decimalOne,hexaOne);
    }

    return 0;
}
