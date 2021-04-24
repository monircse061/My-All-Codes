#include<bits/stdc++.h>
using namespace std;
vector<int>v[25*10009];
int dot=0,visit[25*100009],cont[25*100009];
void dfs(int n) {
    visit[n]=1;
    //cout<<n<<" ";
    for(int i=0; i<v[n].size(); i++) {
        int edge=v[n][i];

        if(!visit[edge]) {
            dot--;
            //cout<<n<<" "<<edge<<endl;

            if(dot>0) {
                cont[edge]=1;
                //cout<<edge<<" ";
            }
            dfs(edge);
        }
    }
}

int main() {
    int n,m,k,sum=0,x=1,s,node=0;
    char ch[609][609];
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0; i<n; i++) {
        scanf("%s",ch[i]);
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(ch[i][j]=='.') {
                dot++;
            }
            node++;
            if(ch[i][j]=='#') {
                continue;
            }

            if(x==1&&ch[i][j]=='.') {
                s=node;
                x=0;
            }
            if(j<m-1)
            {if(ch[i][j+1]=='.')
                {
                v[node].push_back(node+1);
                v[node+1].push_back(node);
                //cout<<node<<" "<<node+1<<endl;
            }}
            if(j>0)
            {if(ch[i][j-1]=='.')
             {
                v[node].push_back(node-1);
                v[node-1].push_back(node);
            }}
            if(i>0)
            {if(ch[i-1][j]=='.')
             {
                v[node].push_back(node-m);
                v[node-m].push_back(node);
            }}
            if(i<n-1)
            {if(ch[i+1][j]=='.')
             {
                v[node].push_back(node+m);
                v[node+m].push_back(node);}}}}
    dot-=k;
    //cout<<s;
    cont[s]=1;
    dfs(s);
    int node1=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            node1++;
            if(ch[i][j]=='#') {
                printf("%c",ch[i][j]);
                continue;
            } else {
                if(cont[node1]==1) {
                    printf(".");
                } else {
                    printf("X");}}}
        printf("\n");}
    return 0;
}
