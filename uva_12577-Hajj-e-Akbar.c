#include<stdio.h>
#include<string.h>

int main()
{
    char input[20];
    int count=0;
    gets(input);
    while(strcmp(input,"*")!=0)
    {
        count++;
        if( strcmp(input,"Hajj")==0)
        printf("Case %d: Hajj-e-Akbar\n",count);
        if(strcmp(input,"Umrah")==0)
        printf("Case %d: Hajj-e-Asghar\n",count);
        gets(input);
    }
    return 0;
}
