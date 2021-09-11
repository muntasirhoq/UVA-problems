#include <stdio.h>
#include <string.h>
int main()
{
    int testCase=0;
    for(;;)
    {
        testCase++;
        char string[14];
        gets(string);

        if(strlen(string)==1 && string[0]=='#')
        break;

        else if( strcmp(string,"HELLO")==0)
        printf("Case %d: ENGLISH\n",testCase);

        else if( strcmp(string,"HOLA")==0)
        printf("Case %d: SPANISH\n",testCase);

        else if( strcmp(string,"HALLO")==0)
        printf("Case %d: GERMAN\n",testCase);

        else if( strcmp(string,"BONJOUR")==0)
        printf("Case %d: FRENCH\n",testCase);

        else if( strcmp(string,"CIAO")==0)
        printf("Case %d: ITALIAN\n",testCase);

        else if( strcmp(string,"ZDRAVSTVUJTE")==0)
        printf("Case %d: RUSSIAN\n",testCase);

        else
        printf("Case %d: UNKNOWN\n",testCase);



    }
    return 0;
}
