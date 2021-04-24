#include<bits/stdc++.h>
using namespace std;
struct abc{
  int u,v;
};
abc e[10000];
bool compare(abc a,abc b){
      return a.u<b.u;
}
int main()
{
    int s,n,x[10000],y[10000],z=0,sum;
    scanf("%d %d",&s,&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x[i],&y[i]);
        e[i].u=x[i];e[i].v=y[i];
    }
    sort(e,e+n,compare);
    if(s>e[0].u)
    {
        sum=s;
        for(int i=0; i<n; i++)
        {
            if(sum<=e[i].u)
            {
                printf("NO");
                z=1;
                break;
            }
            sum+=e[i].v;
        }
        if(z==0)
            printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
