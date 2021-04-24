#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector< pair <ll,ll> >v[100009];
ll n,m,t,x,y,w,dis[100009],a[100009],l,cont[100009],cont1[100009],par[100009],c=0,b[10009];
void fun(ll n)
{
    for(int i=0; i<=n; i++)
    {
        dis[i]=INT_MAX;par[i]=0;
        a[i]=0;cont[i]=0;cont1[i]=0;
    }
}
ll bellman_ford(ll s,ll n)
{
    dis[s]=0; l=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<v[j].size(); k++)
            {
                ll ver=v[j][k].second;
                ll w=v[j][k].first;
                if(dis[ver]>dis[j]+w)
                {
                    if(i==n&&cont[j]==0){

                        a[l]=j;
                        l++;cont[j]=1;
                    }
                    if(i==n)
                    {
                        //return 0;
                    }
                    dis[ver]=dis[j]+w;
                    par[ver]=j;
                }
            }
        }
    }
    //return 1;
}
void path(ll u,ll v)
{
  if(par[v])
    {
        path(u,par[v]);
    }
    if(u==v)
        printf("%lld", v);
    else
    printf("%lld", v);
}
int main()
{
    ll j=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        j++;
        fun(n);
        for(int i=1; i<=m; i++)
        {
            scanf("%lld %lld %lld",&x,&y,&w);
            v[x].push_back(make_pair(w,y));
        }
        printf("Case %lld:",j);
        bellman_ford(0,n);
        if(a[0]==0)
        {
            printf(" impossible\n");
        }
        else
        {
            //for(ll i=0; i<l; i++)
            {
                path(1,3);
                //cout<<a[i]<<" ";
            }
            //printf("\n");
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<v[i].size(); j++)
            {
                v[i][j].first=0;
                v[i][j].second=0;
            }
        }
    }
    return 0;
}
