#include<bits/stdc++.h>
using namespace std;
vector<int>a[1010];
int c[1005],vis[1005]= {0};
void dfs(int n)
{
    vis[n]=1;
    for(int i=0; i<a[n].size(); i++)
    {
        int e=a[n][i];
        if(!vis[e])
        {
            c[e]=c[n]+1;
            //cout<<e<<" "<<c[e]<<endl;
            dfs(e);
        }
    }
}
int main()
{
    int n,x,y,check=0,z,girl,s,s1;
    scanf("%d",&n);
    for(int i=1; i<=n-1; i++)
    {
        cin>>x>>y;
        s1=min(x,y);
        if(i==1)
        {
            s=s1;
        }
        if(s>s1)
            s=s1;
        a[x].push_back(y);
        a[y].push_back(x);

    }
    for(int i=s; i<=n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    int ch[1005];
    scanf("%d",&girl);
    for(int i=0; i<girl; i++)
    {
        scanf("%d",&ch[i]);
        if(check==0&&ch[i]!=1)
        {
            check=c[ch[i]];
            z=ch[i];
        }
    }

    for(int i=1; i<girl; i++)
    {
        if(check>c[ch[i]]&&ch[i]!=1)
        {
            check=c[ch[i]];
            z=ch[i];
        }
        else if(check==c[ch[i]]&&ch[i]!=1)
        {
            if(ch[i]<z)
            {
                z=ch[i];
            }
        }
    }
    cout<<z<<endl;
    return 0;
}
