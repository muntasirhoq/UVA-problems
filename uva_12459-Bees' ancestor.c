#include <stdio.h>

int main()
{
    int gen;
    scanf("%d",&gen);

    while(gen!=0)
    {
        long long int male=0,female=1;

        while(gen>1)
        {
            long long int t=male;
            male=female;
            female+=t;
            gen--;
        }

        printf("%lld\n",female+male);

        scanf("%d",&gen);
    }

    return 0;
}
