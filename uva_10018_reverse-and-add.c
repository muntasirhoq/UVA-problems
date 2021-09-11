#include<math.h>

int isPalindrome(long long int num)
{
    long long int temp=num,reverse=0;

    for(;temp!=0;)
    {
        reverse=reverse*10+temp%10;
        temp/=10;
    }

    if(reverse==num)
        return 1;
    else
        return 0;
}

long long int reverse(long long int num)
{
    long long int temp=num,reverseNum=0;

    for(;temp!=0;)
    {
        reverseNum=reverseNum*10+temp%10;
        temp/=10;
    }

    return reverseNum;
}


int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {

        long long int number;
        scanf("%lld",&number);

        int additionCount=0;


        for(;!isPalindrome(number);)
        {
            additionCount++;

            number=number+reverse(number);

        }

        printf("%d %lld\n",additionCount,number);

    }

    return 0;
}
