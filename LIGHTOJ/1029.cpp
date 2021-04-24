#include<bits/stdc++.h>
using namespace std;
int p[100000];
struct abc
{
    int u,v,w;
} ;
bool compare1(abc a,abc b)
{
    return a.w>b.w;
}
void parent(int n)
{
    for(int i=0; i<=n; i++)
    {
        p[i]=i;
    }
}
bool compare(abc a,abc b)
{
    return a.w<b.w;
}

abc e[100000];
int rcheck(int a)
{
    if(p[a]!=a)
    {
        return p[a]=rcheck(p[a]);
    }
    else
    {
        return a;
    }
}
int fun(int n)
{
    int s=0;
    sort(e,e+n,compare);
    for(int i=0; i<n; i++)
    {
        int px=rcheck(e[i].u);
        int py=rcheck(e[i].v);
        if(px!=py)
        {
            p[py]=px;
            s+=e[i].w;
        }
    }
    return s;
}
int fun1(int n)
{
    int s=0;
    sort(e,e+n,compare1);
    for(int i=0; i<n; i++)
    {
        int px=rcheck(e[i].u);
        int py=rcheck(e[i].v);
        if(px!=py)
        {
            p[py]=px;
            s+=e[i].w;
        }
    }
    return s;
}
int main()
{
    int n,x,y,z,l,i,j=0,sum1,sum2;
    int sum,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for( i=0;; i++)
        {
            cin>>x>>y>>z;
            if(x==0&&y==0&&z==0)
            {
                break;
            }
            e[i].u=x;
            e[i].v=y;
            e[i].w=z;
        }
        l=i;
        parent(n);
        sum1=fun(l);
        parent(n);
        sum2=fun1(l);
        j++;
        if((sum1+sum2)%2==0)
            {cout<<"Case "<<j<<": "<<(sum1+sum2)/2<<endl;}
        else
        {
            cout<<"Case "<<j<<": "<<(sum1+sum2)<<"/"<<2<<endl;
        }
    }
    return 0;
}
