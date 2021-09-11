#include <stdio.h>
#include <string.h>
int main()
{
    char string[30],new_string[30];
    int i,count;
    fflush(stdin);
    while(scanf("%s",string)!=EOF)
    {

        count=strlen(string);
        for(i=0;i<count;i++)
        new_string[i]=string[i];
        for(i=0;i<count;i++)
        {
            if(string[i]=='-')
            new_string[i]='-';
            if(string[i]>='A' && string[i]<='C')
            new_string[i]='2';
            if(string[i]>='D' && string[i]<='F')
            new_string[i]='3';
            if(string[i]>='G' && string[i]<='I')
            new_string[i]='4';
            if(string[i]>='J' && string[i]<='L')
            new_string[i]='5';
            if(string[i]>='M' && string[i]<='O')
            new_string[i]='6';
            if(string[i]>='P' && string[i]<='S')
            new_string[i]='7';
            if(string[i]>='T' && string[i]<='V')
            new_string[i]='8';
            if(string[i]>='W' && string[i]<='Z')
            new_string[i]='9';
            if(string[i]=='1')
            new_string[i]='1';
            if(string[i]=='0')
            new_string[i]='0';
        }
        for(i=0;i<count;i++)
        printf("%c",new_string[i]);
        printf("\n");
    }
    return 0;
}
