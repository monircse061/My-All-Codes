#include<bits/stdc++.h>
using namespace std;
vector<int>vertex[100005];
bool visit[100005],vi[100005];
int s[100005],check=1,local,res=0,ck,h[100005];

void dfs(int n)
{
    visit[n]=true;
    for(int i=0; i<vertex[n].size(); i++)
    {
        int v=vertex[n][i];
        h[v]=h[n]+1;
        if(!visit[v])
        {
            if(h[v]%2==0)
            {
                s[v]=0;
                s[v]+=s[n];
                //res+=ar[n];
            }
            else
            {
                local=s[v]-s[n];

                if(vi[n])
                {
                    ck=s[n];
                    s[n]+=local;
                    if(ck!=s[n])
                    {
                        check=0;
                    }
                }
                else
                {
                    s[n]+=local;
                }
                vi[n]=true;
                //cout<<local<<" "<<s[n]<<" "<<s[v];
                if(local<0)
                {
                    check=0;
                    return;
                }
                else
                {
                    res+=local;
                }
            }
            if(check==0)return;
            dfs(v);
        }
    }
}
int main()
{
    int n,x,y;
    scanf("%d",&n);
    for(int i=2; i<=n; i++)
    {
        scanf("%d",&x);
        vertex[x].push_back(i);
        vertex[i].push_back(x);
    }
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&s[i]);
    }
    res+=s[1];
    h[1]=1;
    dfs(1);
    if(check==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",res);
    }

    return 0;
}
