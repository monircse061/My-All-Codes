#include<bits/stdc++.h>
using namespace std;
set<int>s[10000];
vector<int>v[10000];
set<int>::iterator it;
bool visit[10000];
void dfs(int n)
{
    visit[n]=true;
    for(int i=0; i<v[n].size(); i++)
    {
        int b=v[n][i];
        if(!visit[b])
        {
            //cout<<n<<" "<<b<<endl;
            dfs(b);
        }
    }
}
int main()
{
    int n,m,c,l,cont=0,zero=0;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&c);
        if(c==0)zero++;
        for(int j=1; j<=c; j++)
        {
            scanf("%d",&l);
            s[i].insert(l);
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)continue;
            for(it=s[i].begin(); it!=s[i].end(); it++)
            {//it=
                if(s[j].find(*it)!=s[j].end())
                {
                    v[i].push_back(j);
                    v[j].push_back(i);
                    break;
                }}
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            dfs(i);
            cont++;
        }
    }
    if(zero==n)
    {
        printf("%d",cont);
    }
    else
    {
        printf("%d",cont-1);
    }
    return 0;
}
