#include <stdio.h>
int main()
{
    long long N;
    for(;;)
    {scanf("%lld",&N);
    if(N<0)
    break;;
    N=(N*(N-1))/2+N*2-(N-1);
    printf("%lld\n",N);}
    return 0;
}
