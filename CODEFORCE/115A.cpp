#include<bits/stdc++.h>
using namespace std;
vector<int>v[2*1009];
int a[2*10009],visit[2*10009],len=-1,x=0,cont[2*10009];
void dfs(int n)
{
    visit[n]=1;
    for(int i=0; i<v[n].size(); i++)
    {
        int edge=v[n][i];
        if(!visit[edge])
        {
            cont[edge]=cont[n]+1;
            if(len<cont[edge])
            {
                len=cont[edge];
            }
            dfs(edge);
        }
    }
}
int main()
{
    int n,x1,y;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        x1=i;
        y=a[i];
        if(y!=-1)
        {
            v[x1].push_back(y);
            v[y].push_back(x1);
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(!visit[i]&&a[i]==-1)
        {
            dfs(i);
            if(x<len)
            {
                x=len;
            }
        }
    }
    printf("%d",x+1);
    return 0;
}
