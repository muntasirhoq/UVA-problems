#include<stdio.h>

int hugeDivision(char input[1000000],int setElement)
{
    int ans=0,j,i,remainder;

    remainder = 0;
    for(i = 0; input[i]; i++)
    {
        remainder = (remainder*10 + input[i]-'0')%setElement;
    }

    if(remainder!=0)
    {
        ans=1;
    }

    return ans;
}

int main()

{
    int test=1;
    char year[1000000];

    while(scanf("%s",year)!=EOF)
    {
        if(test>1)
            printf("\n");

        if( (hugeDivision(year,4)==0 && hugeDivision(year,100)!=0) || hugeDivision(year,400)==0 )
        {
            printf("This is leap year.\n");
            if(hugeDivision(year,15)==0)
            {
                printf("This is huluculu festival year.\n");
            }
            if (hugeDivision(year,55)==0)
            {
                printf("This is bulukulu festival year.\n");
            }
        }

        else
        {
            if(hugeDivision(year,15)==0)
            {
                printf("This is huluculu festival year.\n");
            }
            else
                printf("This is an ordinary year.\n");
        }

        test++;
    }

    return 0;
}
