#include<bits/stdc++.h>
using namespace std;
struct abc
{
    int u,v,w;
};
abc e[10000];
int main()
{
    int n,a[10000],l1=0,l2=0,l=0,on=0,tw=0,th=0,b,c;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            l++;
            on++;
            e[l].u=i;
        }
        else if(a[i]==2)
        {
            l1++;
            tw++;
            e[l1].v=i;
        }
        else
        {
            l2++;
            th++;
            e[l2].w=i;
        }
    }
    b=min(on,tw);
    c=min(b,th);
    printf("%d\n",c);
    for(int i=1; i<=c; i++)
    {
        cout<<e[i].u<<" "<<e[i].v<<" "<<e[i].w<<endl;
    }
    return 0;
}
