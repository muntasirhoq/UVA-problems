#include <stdio.h>
int main()
{
    int m,n,i,j,field=1,count,k;

    while(scanf("%d %d",&n,&m)!=EOF)
        {
            if(field>1)
            printf("\n");
            if(n==0 && m==0)
            break;
            char input[n][m][1];
            for(i=0;i<n;i++)
            {
                scanf("%s",input[i]);
            }
            printf("Field #%d:\n",field);
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    count=0;
                    if(input[i][j][0]=='*')
                    {printf("*");
                    continue;}
                    for(k=i-1;k<=i+1;k++)
                    {
                        if(k<0 && k>n)
                        continue;
                        if(input[k][j-1][0]=='*' && j!=0)
                        count++;
                        if(input[k][j][0]=='*' && k!=i)
                        count++;
                        if(input[k][j+1][0]=='*' &&j!=(m-1) )
                        count++;
                    }
                    printf("%d",count);
                }
                printf("\n");
            }
        field++;
    }
    return 0;
}
