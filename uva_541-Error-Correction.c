#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int matrix[n][n],i=0,j=0,sumRow[n],sumColumn[n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }

        for(i=0;i<n;i++)
        {
            sumRow[i]=0;
            for(j=0;j<n;j++)
            {
                sumRow[i]=sumRow[i]+matrix[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            sumColumn[i]=0;
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                sumColumn[i]=sumColumn[i]+matrix[j][i];
            }
        }

        int count1=0,count2=0, cr, cc;

        for(i=0;i<n;i++)
        {
            if( sumRow[i]%2!=0 )
            {
                count1++;
                cr = i;
            }
            if(sumColumn[i]%2!=0)
            {
                count2++;
                cc = i;
            }
        }

        if(count1==0 && count2==0)
        {
            printf("OK\n");
        }

        else if (count1==1 && count2 == 1)
        {
            printf("Change bit (%d,%d)\n",cr+1, cc+1);

        }

        else
        {
            printf("Corrupt\n");
        }


        scanf("%d",&n);
    }
    return 0;
}
