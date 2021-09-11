#include <iostream>

using namespace std;

int dp[5000],a,b,c;

int maximum(int p,int q)
{
    if(p>q)
        return p;
    return q;
}

int max(int p,int q,int r)
{
    return maximum(p,maximum(q,r));
}

int cutRibbon( int length )
{
    int count;
    if(length==0)
    {
        return 0;
    }

    else if(length<c)
    {
        return -100;
    }

    if(dp[length-a]==-1)
    {
        dp[length-a]=maximum(cutRibbon(length-a),dp[length-a]);
    }
    if(dp[length-b]==-1)
    {
        dp[length-b]=maximum(dp[length-b],cutRibbon(length-b));
    }
    if(dp[length-c]==-1)
    {
        dp[length-c]=maximum(dp[length-c],cutRibbon(length-c));
    }

    count=max( 1+ dp[length-a] , 1+ dp[length-b] , 1+ dp[length-c] );

 //  cout<<count<<"  " <<length<<endl;

    return count;

}

int minimum(int p,int q)
{
    if(p<q)
        return p;
    return q;
}


int main()
{
    while(1){
    int n,p,q,i,r,max;

    for(i=0;i<5000;i++)
        dp[i]=-1;
    dp[0]=0;

    cin >> n >> p >> q >> r;

    max=maximum(p,q);
    a=maximum(max,r);

    max=minimum(p,q);
    c=minimum(max,r);

    b=p+q+r-a-c;

    cout<<cutRibbon(n)<<endl;}

    return 0;
}
