#include<bits/stdc++.h>
using namespace std;
int c[100005];
struct abc
{
    int u,v,position;
};
abc ar[100005];
bool compare(abc a,abc b)
{
    return a.v>b.v;
}

int main()
{
    int t,n,ck,first,second,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ck=0;
        first=0,second=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d %d",&ar[i].u,&ar[i].v);
            ar[i].position=i;
        }

        sort(ar+1,ar+n+1,compare);
        int j=1;

        c[ar[j].position]=1;
        x=ar[j].u,y=ar[j].v;
        first++;
        for(int i=2; i<=n; i++)
        {
            if(ar[i].v<=y&&ar[i].v>=x)
            {
                c[ar[i].position]=1;
                j=i;
                x=min(x,ar[i].u);
                y=max(y,ar[i].v);
                first++;
            }
        }
        /**for(int i=1; i<=n; i++)
        {
            if(c[ar[i].position]==0&&ck==0)
            {
                ck=1;
                c[ar[i].position]=2;
                j=i;
                second++;
                continue;
            }
            if(ck==1&&ar[i].u>ar[j].v&&c[ar[i].position]==0)
            {
                c[ar[i].position]=2;
                j=i;
                second++;
            }
        }**/
        if(first==n)
        {
            printf("-1\n");
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(c[i]==0){
                    printf("2 ");
                    continue;
                }
                printf("%d ",c[i]);
            }

            printf("\n");
        }
        for(int i=1;i<=n;i++){
            c[i]=0;
        }
    }
    return 0;
}
