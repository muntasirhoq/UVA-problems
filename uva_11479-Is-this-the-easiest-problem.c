#include <stdio.h>

int main()
{   long x,y,z;
    int cases,i;
    scanf("%d",&cases);
    for(i=1;i<cases+1;i++){
        scanf("%ld %ld %ld",&x,&y,&z);
        if(x>=y+z || y>=x+z || z>=x+y || x<1 ||y<1 ||z<1){
            printf("Case %d: Invalid\n",i);
        }
        else if(x==y && y==z){
            printf("Case %d: Equilateral\n",i);
        }
        else if(x==y || y==z || x==z){
            printf("Case %d: Isosceles\n",i);
        }else{
            printf("Case %d: Scalene\n",i);
        }
    }
    return 0;
}
