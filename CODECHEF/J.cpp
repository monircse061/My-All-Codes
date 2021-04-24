#include<bits/stdc++.h>
using namespace std;
vector<int>v[100009];
queue<int>q;
bool visit[100009];
int ck,l1,l2,a[100009],br[10000],Case=0;
void bfs(int s,int n)
{
    q.push(s);
    visit[s]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            if(visit[v[u][i]]==0)
            {
                visit[v[u][i]]=true;
                int   p=v[u][i];
                if(a[u]==1)
                {
                    a[p]=2;
                }
                else
                {
                    a[p]=1;
                }
                if(a[u]%2==0)
                {
                    ///cout<<p<<" "<<u<<endl;
                    printf("%d %d\n",p,u);
                }
                else
                {
                    ///cout<<u<<" "<<p<<endl;
                    printf("%d %d\n",u,p);
                }
                q.push(p);
            }
        }
    }
}
int main()
{
    int n,x,y,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        //ck=1,l1=0;
        Case++;
        a[1]=1;
        for(int i=1; i<=n-1; i++)
        {
            scanf("%d %d",&x,&y);
            //if(i==1)s=x;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        printf("Case %d:\n",Case);
        for(int i=1; i<=n; i++)
        {
            if(!visit[i])
            {
                bfs(i,n);
            }
        }
        // printf("\n");
        for(int i=1; i<=n; i++)
        {
            v[i].clear();
            visit[i]=0;
            a[i]=0;
        }
    }
    return 0;
}
