#include <stdio.h>

int main()
{
    long long int number;
    int testCase=0;
    while(scanf("%lld",&number)!=EOF)
    {
        testCase++;

        int doshok=0,shotok=0,hajar=0,lokhkho=0,koti=0,nextShotok=0,nextHajar=0,nextLokhkho=0,nextKoti=0,count=1,temp,arrayNumber[9],i=0;

        if (number==0)
        {
            printf("%4d. 0\n",testCase);
            continue;
        }

        for(i=0;i<9;i++)
        {
            arrayNumber[i]=0;
        }

        i=0;

        for(;number!=0;)
        {
            temp=number%10;
            number=number/10;

            if(count<=2)
            {
                if(count==1)
                doshok=doshok+temp;
                else
                doshok=doshok+temp*10;
                count++;

                if(count>2 || number==0)
                {
                    arrayNumber[i]=doshok;
                    i++;
                }

            }

            else if(count==3)
            {
                shotok=temp;
                count++;

                arrayNumber[i]=shotok;
                i++;

            }


            else if(count<=5)
            {
                if(count==4)
                hajar=hajar+temp;
                else
                hajar=hajar+temp*10;
                count++;

                if(count>5 || number==0)
                {
                    arrayNumber[i]=hajar;
                    i++;;
                }
            }


            else if(count<=7)
            {
                if(count==6)
                lokhkho=lokhkho+temp;
                else
                lokhkho=lokhkho+temp*10;
                count++;

                if(count>7 || number==0)
                {
                    arrayNumber[i]=lokhkho;
                    i++;
                }

            }


            else if(count<=9)
            {
                if(count==8)
                koti=koti+temp;
                else
                koti=koti+temp*10;
                count++;

                if(count>9 || number==0)
                {
                    arrayNumber[i]=koti;
                    i++;
                }

            }

            else if(count==10)
            {
                nextShotok=temp;
                count++;

                arrayNumber[i]=nextShotok;
                i++;

            }


            else if(count<=12)
            {
                if(count==11)
                nextHajar=nextHajar+temp;
                else
                nextHajar=nextHajar+temp*10;
                count++;

                if(count>12 || number==0)
                {
                    arrayNumber[i]=nextHajar;
                    i++;
                }

            }


            else if(count<=14)
            {
                if(count==13)
                nextLokhkho=nextLokhkho+temp;
                else
                nextLokhkho=nextLokhkho+temp*10;
                count++;

                if(count>14 || number==0)
                {
                    arrayNumber[i]=nextLokhkho;
                    i++;
                }
            }


            else if(count<=16)
            {
                if(count==15)
                nextKoti=nextKoti+temp;
                else
                nextKoti=nextKoti+temp*10;
                count++;

                if(count>16 || number==0)
                {
                    arrayNumber[i]=nextKoti;
                    i++;
                }
            }

        }


        int j;
        printf("%4d.",testCase);
        for(j=i-1;j>=0;j--)
        {
            if( (j==8 || j==4) && arrayNumber[j]!=0)
            {
                printf(" %d kuti",arrayNumber[j]);
            }

            if (j==4 && arrayNumber[j]==0 )
            printf(" kuti");

            else if ( (j==7 || j==3) && arrayNumber[j]!=0 )
            {
                printf(" %d lakh",arrayNumber[j]);
            }

            else if( (j==2 || j==6 ) && arrayNumber[j]!=0 )
            {
                printf(" %d hajar",arrayNumber[j]);
            }

            else if( (j==1 || j==5 ) && arrayNumber[j]!=0 )
            {
                printf(" %d shata",arrayNumber[j]);
            }

            else if( (j==0) && arrayNumber[j]!=0 )
            {
                printf(" %d",arrayNumber[j]);
            }
        }
        printf("\n");

    }
    return 0;
}
