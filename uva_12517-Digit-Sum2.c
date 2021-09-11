#include <stdio.h>
#include <math.h>

long long int digitSum(int num)
{
    long long int sum=0,i,left=0,right=0,mid=0,n=num,a,count=0,divisor=1;

    for(;n!=0;)
    {
        right=num%divisor;
        mid=n%10;
        n/=10;
        left=n;


        sum = sum + divisor * ( (mid-1) * mid / 2 + 45 * left ) + mid * (right + 1);
        divisor*=10;

        count++;
    }

    return sum;
}

int main()
{
    long long int number1,number2;

    scanf("%lld %lld",&number1,&number2);

    for(;number1!=0 && number2!=0;)
    {
        printf("%lld\n",digitSum(number2)-digitSum(number1-1));

        scanf("%lld %lld",&number1,&number2);
    }

    return 0;
}
