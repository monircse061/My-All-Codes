#include<bits/stdc++.h>
using namespace std;
struct abc
{
    int u,v,w;
};
bool compare(abc d,abc e)
{
    return d.u<e.u;
}
abc a[3*100009];
int main()
{
    int n,m=1,x,y;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        a[i].u=x;
        a[i].v=y;
        a[i].w=i+1;
    }
    sort(a,a+n,compare);
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1].u>=a[i].u&&a[i+1].v<=a[i].v)
        {
            m=0;
            cout<<a[i+1].w<<" "<<a[i].w;
            break;
        }
        else if(a[i].u>=a[i+1].u&&a[i].v<=a[i+1].v)
        {
            m=0;
            cout<<a[i].w<<" "<<a[i+1].w;
            break;
        }
    }
    if(m==1)
    {
        cout<<-1<<" "<<-1;
    }
    return 0;
}
