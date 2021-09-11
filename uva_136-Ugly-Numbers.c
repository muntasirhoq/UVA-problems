#include <stdio.h>

int main()
{
    long long int a[1601];
    int p1=0,p2=0,p3=0,count=1499,end=0;

    a[0]=1;

    for(;end<count;)
    {
        while ( a [ p1 ] * 2 <= a [ end ] )
            ++ p1;
        while ( a [ p2 ] * 3 <= a [ end ] )
            ++ p2;
        while ( a [ p3 ] * 5 <= a [ end ] )
            ++ p3;
        if ( a [ p1 ] * 2 < a [ p2 ] * 3 && a [ p1 ] * 2 < a [ p3 ] * 5 )
            a [ ++ end ] = a [ p1 ++ ] * 2;
        else if ( a [ p2 ] * 3 < a [ p3 ] * 5 )
            a [ ++ end ] = a [ p2 ++ ] * 3;
        else
            a [ ++ end ] = a [ p3 ++ ] * 5;
    }


        printf("The 1500'th ugly number is %lld.\n",a[end]);


    return 0;
}
