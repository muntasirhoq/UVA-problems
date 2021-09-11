#include <stdio.h>

int main()
{
        int num1,num2;
        while(scanf("%d %d",&num1,&num2)!=EOF)
        {
            int swap=0;
            if (num1>num2)
            {
                int a;
                a=num1;
                num1=num2;
                num2=a;
                swap=1;
            }
            int count,countLongest=0,j;
            if ( num1<1 || num2<1 || num1>=1000000 || num2>=1000000 )
            return 0;
            for(j=num1;j<=num2;j++)
            {
                int i;
                i=j;
                count=1;
                for(;i!=1;)
                {
                    count++;
                    if (i%2==1)
                    i=3*i+1;
                    else
                    i=i/2;
                }
                if (count>countLongest)
                countLongest=count;
            }
            if (swap==0)
            printf("%d %d %d\n",num1,num2,countLongest);
            else
            printf("%d %d %d\n",num2,num1,countLongest);
        }
    return 0;
}
