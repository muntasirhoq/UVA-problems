#include<stdio.h>
int main()
{
    int testCase;
    scanf("%d",&testCase);
    for(;testCase>0;testCase--)
    {
        int side1,side2,side3;
        scanf("%d %d %d",&side1,&side2,&side3);

        if(side1+side2>side3 &&side1+side3>side2 && side2+side3>side1 )
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");;
        }

    }
    return 0;
}
