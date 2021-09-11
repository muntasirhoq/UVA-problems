#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        long long int a,b,c,d;

        long long int array[4];
        int i,j;

        for(i=0;i<4;i++)
            scanf("%lld",&array[i]);

        for(i=0;i<3;i++)
        {
            for(j=i+1;j<4;j++)
            {
                if(array[i]>array[j])
                {
                    array[i]=array[i]^array[j];
                    array[j]=array[i]^array[j];
                    array[i]=array[i]^array[j];
                }
            }
        }

        a=array[0];
        b=array[1];
        c=array[2];
        d=array[3];

        if(a==b && b==c && c==d)
        {
            printf("square\n");
        }

        else if( (a==b && c==d) || (a==c && b==d) || (a==d && b==c) )
        {
            printf("rectangle\n");
        }

        else if( (a+b+c)>=d)
        {
            printf("quadrangle\n");
        }

        else
            printf("banana\n");
    }

    return 0;
}
