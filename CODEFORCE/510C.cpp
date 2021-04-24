#include<bits/stdc++.h>
using namespace std;
int cont[1000],l;
vector<int>vec[109],print;
queue<int>q;
int bfs() {
    for(int i=1; i<=26; i++) {
        if(cont[i]==0) {
            q.push(i);
        }
    }
    while(!q.empty()) {
        int u=q.front();
        q.pop();
        print.push_back(u);
        for(int i=0; i<vec[u].size(); i++) {
            int adj=vec[u][i];
            cont[adj]--;
            if(cont[adj]==0) {
                q.push(adj);
            }
        }
    }
    for(int i=1; i<=26; i++) {
        if(cont[i]) {
            printf("Impossible");
            return 0;
        }
    }
    return 1;
}
int main() {
    int n,u,v,ck,l=1;
    string s[109];
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        cin>>s[i];
    }
    for(int i=2; i<=n; i++) {
        int ck=0;
        for(int j=0; j<s[i-1].size()&&j<s[i].size(); j++) {
            if(s[i-1][j]!=s[i][j]) {
                v=(s[i][j]-97)+1;
                u=(s[i-1][j]-97)+1;
                vec[u].push_back(v);

                cont[v]++;
                ck=1;
                break;
            }
        }
        if(ck==0) {
            if(s[i-1].size()>s[i].size()) {
                printf("Impossible");
                return 0;
            }
        }
    }
     l=bfs();
    if(l==0)return 0;
    for(int i=0; i<26; i++)
        printf("%c",print[i]+96);
    return 0;
}
