#include <stdio.h>

long int array[1000000],index;

int find(long int n)
{
    long int i;
    for(i=0;i<index;i++){
        if(array[i]==n)
            return 0;}
    return 1;
}

int main()
{
    int testCase,test=1;
    scanf("%d",&testCase);

    while(testCase--)
    {
        long int num,sum,n;
        int digit;
        scanf("%ld",&num);
        n=num;

        index=0;

        while(find(num))
        {
            array[index++]=num;
            sum=0;
            while(num)
            {
                digit=num%10;
                num/=10;
                sum+=(digit*digit);
            }
            num=sum;
        }
        if (num==1)
            printf("Case #%d: %ld is a Happy number.\n",test,n);
        else
            printf("Case #%d: %ld is an Unhappy number.\n",test,n);

        test++;
    }

    return 0;
}
