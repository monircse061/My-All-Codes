#include<bits/stdc++.h>
using namespace std;
struct abc
{
    int u,v;
};
abc e[1000009];
bool compare(abc a,abc b)
{
    return a.u>b.u;
}
bool compare1(abc c,abc d)
{
    return c.v<d.v;
}
int main()
{
    int n,m,cont=0,x=0;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&e[i].u,&e[i].v);
    }
    sort(e+1,e+n+1,compare);
    for(int i=1; i<=n; i++)
    {
        //cout<<e[i].u<<" "<<e[i].v<<endl;
    } int init,Final;
    for(int i=1; i<=n; i++)
    {
        if(e[i].u==e[m].u&&x==0)
        {
            init=i;
            x=1;
        }
        if(e[i].u==e[m].u&&x==1)
        {
            Final=i;
        }
    }
    //cout<<init<<" "<<Final<<endl;
    //cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/"<<endl;
    //if(init!=Final)
    {sort(e+init,e+Final+1,compare1);}
    //else
        {
        //printf("1");
        //return 0;
    }
    for(int i=init; i<=Final; i++)
    {
        //cout<<e[i].u<<" "<<e[i].v<<endl;
        if(e[i].v==e[m].v)
        {
            cont++;
        }
        else
        {
            //break;
        }
    }
    printf("%d",cont);
    return 0;
}
