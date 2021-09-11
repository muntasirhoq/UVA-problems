#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,sum,count;
    char a1[1000],b;
    while(scanf("%s",a1)!=EOF){
    sum=0;
    count=0;
    for(i=0;a1[i]!='\0';i++)
    {
        if(a1[i]>='a' && a1[i]<='z')
        {
            b=a1[i];
            sum=sum+((int)b-96);
        }
        if(a1[i]>='A' && a1[i]<='Z')
        {
            b=a1[i];
            sum=sum+((int)b-38);
        }
    }

    for(i=2;i<=sqrt(sum);i++)
    {
        if(sum%i==0)
        count++;
    }
    if(count==0)
    printf("It is a prime word.\n");
    else
    {
        printf("It is not a prime word.\n");
    }}
    return 0;

}
