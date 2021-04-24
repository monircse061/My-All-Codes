#include<bits/stdc++.h>
using namespace std;
vector<int>v[2*10009];
queue<int>q;
int cont[2*10000],ar[1000009],visit[2*1009],x;
void fun() {
    for(int i=1; i<=2*1009; i++) {
        cont[i]=0,visit[i]=0;
    }
}
void bfs(int u) {
    q.push(s);
    visit[s]=1;
    cont[s]=-1;
    while(!q.empty()) {
         u=q.front();
        q.pop();
        for(int i=0; i<v[u].size(); i++) {
            if(visit[v[u][i]]==0) {
                int p=v[u][i];
                visit[p]=1;
                q.push(p);
                if(cont[u]==-1)
                    cont[p]=-2;
                else
                    cont[p]=-1;
            }
            else if(cont[v[u][i]]==cont[u]) {
                printf("Suspicious bugs found!\n");
                //cout<<v[u][i]<<" "<<x<<endl;
                x=0;
                break;
            }
        }
        if(x==0)break;
    }
}
int main() {
    int n,m,a,b,t,j=0;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&n,&m);
        x=1;
        for(int i=1; i<=m; i++) {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        j++;
        printf("Scenario #%d:\n",j);
        for(int i=1; i<=n; i++) {
            if(!visit[i]) {
                bfs(i);
            }
            if(x==0)break;
        }
        if(x==1) {
            printf("No suspicious bugs found!\n");
        }
        fun();
        for(int i=0; i<=n; i++) {
            v[i].clear();
        }
    }
    return 0;
}
