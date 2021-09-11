#include <stdio.h>

int main()
{
    int testCase,totalCount=0;

    scanf("%d",&testCase);
    while(testCase--)
    {
        float length,width,depth,weight;

        scanf("%f %f %f %f",&length,&width,&depth,&weight);

        if( ((length<=56.00 && width<=45.00 && depth<=25.00 ) || (length+width+depth)<=125.00) && weight<=7.00 )
        {
            printf("1\n");
            totalCount++;
        }
        else
        {
            printf("0\n");
        }
    }

    printf("%d\n",totalCount);
    return 0;
}
