#include<bits/stdc++.h>
using namespace std;
vector <int> v[100009];
int cont[100009],visit[100009],a[100009],res=0;
int x,y,n,m;
void dfs(int n1)
{
    visit[n1]=1;
    /**if(v[n1].size()==1&&n1!=1)
    {
        if(cont[n1]<=m)
        {
            continue;

        }
        res++;
    }**/
    for(int i=0; i<v[n1].size(); i++)
    {
        int edge=v[n1][i];
        if(!visit[edge])
        {
            if(v[edge].size()!=1&&cont[edge]==0)
            {
            }
            else
            {
                cont[edge]+=cont[n1];
            }
            //cout<<n1<<endl;
            if(cont[edge]>m)
            {
                continue;
            }
            if(v[edge].size()==1&&edge!=1)
            {
                res++;
            }
            dfs(edge);
        }
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            cont[i]=0;
        }
        else
        {
            cont[i]=1;
        }
    }
    for(int i=1; i<n; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    //for(int i=1; i<=n; i++)
    {
        //if(!visit[i])
        {
            dfs(1);
        }
    }
    printf("%d",res);
    return 0;
}
