#include<bits/stdc++.h>
using namespace std;
stack<int>s1,s2;
struct abc
{
    int u,v,w;
};
abc e[2*100009];
bool compare(abc x,abc y)
{
    return x.u<y.u;
}
int main()
{
    int n,a[4*100009];
    char s[4*100009];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&e[i].u);
        e[i].v=i+1;
    }
    scanf("%s",s);
    sort(e,e+n,compare);
    int j=0;
    for(int i=0; i<2*n; i++)
    {
        if(s[i]=='0')
        {
            s1.push(e[j].u);
            s2.push(e[j].v);
            a[i]=s2.top();
            j++;
        }
        else
        {
            s1.pop();
            a[i]=s2.top();
            s2.pop();
        }
    }
    for(int i=0; i<2*n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
