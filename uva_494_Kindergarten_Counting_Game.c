#include <stdio.h>
#include <string.h>
int main()
{
    char word[10000];
    while(gets(word))
    {
        int i,count=0,wordCount=0;
        for(i=0;i< strlen(word);i++)
        {
            if ((word[i]>='A'&& word[i]<='Z') || (word[i]>='a' && word[i]<='z'))
            {
                if(i==0)
                wordCount++;
                else if( count==1 )
                {wordCount++;
                count=0;}
            }
            else
            {
                count=1;
            }
        }
        printf("%d\n",wordCount);
    }
    return 0;
}
