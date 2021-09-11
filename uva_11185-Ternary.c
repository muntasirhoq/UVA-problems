#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    for(;number>=0;)
    {
        int array[100000],i=0,j,temp=number;

        if(number==0)
        printf("0");

        for(;temp!=0;i++)
        {
            array[i]=temp%3;
            temp=temp/3;
        }

        for(j=i-1;j>=0;j--)
        printf("%d",array[j]);
        printf("\n");

        scanf("%d",&number);
    }
    return 0;
}
