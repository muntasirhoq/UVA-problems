#include <stdio.h>

int main ()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    for(;num1!=0 && num2!=0;)
    {
        int temp1,temp2,i;
        long long int sum=0;
        temp1=(num1>=num2)?num1:num2;
        temp2=num1+num2-temp1;

        int temp=0;
        for(i=temp2-1;i<=temp1;)
        {
            if(temp==0)
            {
                i++;
                temp=i;
            }
            else
            {
                sum+=temp%10;
                temp/=10;
            }

        }

        printf("%lld\n",sum);

        scanf("%d %d",&num1,&num2);
    }
}
