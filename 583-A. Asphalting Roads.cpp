#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,j,i,x,list1[80],list2[80];
    cin>>n;

    for(i=0;i<n;i++)
    {
        list1[i]=0;
        list2[i]=0;
    }
    x=n*n;
    for(i=1;i<=x;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;
        b--;

        if(list1[a]==0 && list2[b]==0 )
        {
            printf("%d ",i);
            list1[a]=1;
            list2[b]=1;
        }
    }

    cout<<endl;


    return 0;
}
