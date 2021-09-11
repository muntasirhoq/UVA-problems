#include <stdio.h>
#include <string.h>

int main()
{
    char string[10000];
    while(gets(string))
    {
        printf("%s\n",string);
    }
    return 0;
}
