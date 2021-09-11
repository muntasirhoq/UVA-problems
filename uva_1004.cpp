#include <bits/stdc++.h>

using namespace std;

vector <int> v[200];
int colored[200];

void bfs(int n,int src)
{
    queue<int> q;
    q.push(src);
    colored[src]=1;

    while(!q.empty())
    {
        int u=q.front();
        for(int i=0;i<v[u].size();i++)
        {
            int x=v[u][i];
            if(!colored[x])
            {
                colored[x]=colored[u] == 1? 2 : 1;
                q.push(x);
            }
            else if(colored[x]==colored[u])
            {
                cout<<"NOT BICOLORABLE."<<endl;
                return;
            }
        }
        q.pop();
    }
    cout<<"BICOLORABLE."<<endl;
}

int main()
{
    int n,l,i,j,a,b;

    while(cin >> n && n)
    {
        cin >> l;
        for(i=0;i<n;i++)
        {
            v[i].clear();
        }

        for(i=0;i<n;i++)
        {
            colored[i]=0;
        }

        for(i=0;i<l;i++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        bfs(n,0);
    }
    return 0;
}
