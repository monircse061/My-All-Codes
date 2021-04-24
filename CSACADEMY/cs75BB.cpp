#include<bits/stdc++.h>
using namespace std;
int visit[1000][1000];
char a[509][509];
int ci,cj;
int h,w,n,n1,n2,cont=0,n3,n4;
char fun(int i,int j)
{
    if(visit[i][j])
    {
        return a[i][j];
    }
    visit[i][j]=1;
    ci=i;
    cj=j;
    if(a[i][j]=='D')
    {
        ci++;
        return a[i][j]=fun(ci,cj);
    }
    else if(a[i][j]=='L')
    {
        cj--;
        return a[i][j]=fun(ci,cj);
    }
    else if(a[i][j]=='U')
    {
        ci--;
        return a[i][j]=fun(ci,cj);
    }
    else if(a[i][j]=='R')
    {
        cj++;
        return a[i][j]=fun(ci,cj);
    }
    if(ci<=0||cj<=0||ci>h||cj>w)
    {
        return a[i][j]='1';
    }
}
int main()
{
    scanf("%d %d",&h,&w);
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(!visit[i][j])
                fun(i,j);
        }
    }
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(a[i][j]=='1')
                cont++;
        }
    }
    cout<<cont;
    return 0;
}
