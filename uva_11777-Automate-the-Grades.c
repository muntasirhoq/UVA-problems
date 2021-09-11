#include <stdio.h>

int main()
{
    int testCase,test=1;
    scanf("%d",&testCase);

    while(testCase--)
    {
        int test1,test2,final,attendance,ct1,ct2,ct3,ct=0;
        scanf("%d %d %d %d %d %d %d",&test1,&test2,&final,&attendance,&ct1,&ct2,&ct3);

        if(ct1>=ct2)
        {
            ct+=ct1;
            if(ct2>=ct3)
            {
                ct+=ct2;
            }
            else
            {
                ct+=ct3;
            }
        }
        else
        {
            ct+=ct2;
            if(ct1>=ct3)
                ct+=ct1;
            else
                ct+=ct3;
        }

        ct/=2;
        int total;
        total=test1+test2+final+attendance+ct;

        if(total>=90)
            printf("Case %d: A\n",test);
        else if(total>=80)
            printf("Case %d: B\n",test);
        else if(total>=70)
            printf("Case %d: C\n",test);
        else if(total>=60)
            printf("Case %d: D\n",test);
        else
            printf("Case %d: F\n",test);

        test++;
    }

    return 0;
}
