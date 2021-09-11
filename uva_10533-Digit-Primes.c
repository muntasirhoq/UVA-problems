#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 1000001

int prime[MAX+1],dP[MAX+1];

int sum_of_digit(int num)
{
    int total = 0;
    while(num)
    {
        total += num%10;
        num /= 10;
    }
    return total;
}

void sieveMethod()
{
    int i,j;
    memset(prime, 0, sizeof(prime));
    prime[0] = prime[1] = 1;

    for(i = 4; i < MAX; i += 2) prime[i] = 1;
    int sq = sqrt(MAX);
    for(i = 3; i < sq; i+=2)
        if(!prime[i])
            for(j = i*i; j < MAX; j += 2*i) prime[j] = 1;

    int t= 0;
    for (i=0; i<MAX; i++)
    {
        if(!prime[i])
        {
            if(!prime[sum_of_digit(i)]) t++;
        }
        dP[i] = t;
    }


}



int main()
{
    sieveMethod();

    int testCase;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int number1,number2,digitPrimeCount=0;

        scanf("%d %d",&number1,&number2);

        digitPrimeCount=dP[number2]-dP[number1-1];

        printf("%d\n",digitPrimeCount);

    }

    return 0;
}
