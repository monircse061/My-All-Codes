#include<bits/stdc++.h>
using namespace std;
vector<int>vec[1009];
queue<int>q;
bool visit[1009];
int Count,k,res;
int dfs(int n) {
    visit[n]=true;
    int ar[1000],l=0,sum=1,cont=0;
    for(int i=0; i<vec[n].size(); i++) {
        int b=vec[n][i];
        if(!visit[b]) {//cout<<1;
            cont++;
        }
    }//vec[n].size()
    if(cont>=k) {
        for(int i=0; i<vec[n].size(); i++) {
            ar[i]=1;
        }
        for(int i=0; i<vec[n].size(); i++) {
            int b=vec[n][i];
            if(!visit[b]) {//cout<<1;
                ar[l]=dfs(b);
                l++;
            }
        }
        sort(ar,ar+l);
        for(int i=l-1,j=1; j<=k; j++,i--) {
            sum+=ar[i];
        }
        return sum;
    } else {
        return 1;
    }
}
int main() {
    int t,n,u,v,Case=0;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&n,&k);
        res=0;
        for(int i=1; i<n; i++) {
            scanf("%d %d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }//cout<<vec[2].size();
        int res=dfs(1);
        Case++;
        printf("Case %d: %d\n",Case,res);
        for(int i=1; i<=n; i++) {
            vec[i].clear();
            visit[i]=false;
            //q.pop();
        }
    }
    return 0;
}

