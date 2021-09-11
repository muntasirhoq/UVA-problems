#include <stdio.h>
int main()
{
    int m,n,i,j,field=1,count,k;
    char input[100][100][1];
    for(;;)
    {
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)
        break;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {scanf("%s",input[i][j]);}
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
                if(input[i-1][j-1][0]=='*')
                count++;
                if(input[i-1][j][0]=='*')
                count++;
                if(input[i-1][j+1][0]=='*')
                count++;
                if(input[i][j-1][0]=='*')
                count++;
                if(input[i][j+1][0]=='*')
                count++;
                if(input[i+1][j-1][0]=='*')
                count++;
                if(input[i+1][j][0]=='*')
                count++;
                if(input[i+1][j+1][0]=='*')
                count++;
                printf("%d",count);
            }
            printf("\n");
        }
    field++;
    printf("\n");
    }
    return 0;
}
