#include<bits/stdc++.h>
using namespace std;
struct abc {
    int u,v;
};
abc e[1009];
bool compare(abc a,abc b) {
    return a.v>b.v;
}
int main() {
    int n,k,x,y,ans=-1;
    scanf("%d %d",&n,&k);
    for(int i=1; i<=n; i++) {
        scanf("%d %d",&x,&y);
        e[i].u=x;
        e[i].v=y;
    }
    sort(e+1,e+n+1,compare);
    for(int i=1;i<=n;i++)
        cout<<e[i].u<<" "<<e[i].v<<endl;
    for(int i=1; i<=n; i++) {
        int Max=-1,Min=INT_MAX,ck=0;
        if(i<=n-k+1)
            {for(int j=i,l=1; l<=k; j++,l++) {
                Max=max(Max,e[j].u);
                Min=min(Min,e[j].v);
                ck=1;//&&ck==1
            }
        if(ans<Min-Max) {
            ans=Min-Max;
            //cout<<Max<<" "<<Min<<endl;
        }}
    }
    //printf("%d",ans);
    return 0;
}
