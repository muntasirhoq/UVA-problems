#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(;n!=0;)
    {
        int count=1,a1,a2,a3,a4,a[16],i=3,sum1=0,sum2=0;

        scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
        while(count<=4)
        {
            a[i]=a1%10;
            a1=a1/10;
            a[i+4]=a2%10;
            a2=a2/10;
            a[i+8]=a3%10;
            a3=a3/10;
            a[i+12]=a4%10;
            a4=a4/10;
            count++;
            i--;
        }
        for(i=0;i<=15;i=i+2)
        {
            a1=a[i]*2;
            for(;a1>9;a1=a1/10)
            {
                a2=a1%10;
                sum1=sum1+a2;
            }
            sum1=sum1+a1;
        }
        for(i=1;i<=15;i=i+2)
        {
            sum2=sum2+a[i];
        }
        sum1=sum1+sum2;
        if(sum1%10==0)
        printf("Valid\n");
        else{printf("Invalid\n");}
        n--;
    }
    return 0;
}
