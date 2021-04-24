#include<bits/stdc++.h>
using namespace std;
map<string,int>m,m1;
map<string,int>::iterator it;
int main() {
    int n,a[10009],x=INT_MIN,y=INT_MIN,l=0,ar[10009];
    string s[10009],s1,s2[10009];
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        cin>>s[i]>>a[i];
        m[s[i]]+=a[i];
        //m1[s[i]]=a[i];
    }
    for(int i=1; i<=n; i++) {
        if(x<m[s[i]]) {
            x=m[s[i]];
        }
    }
    for(int i=1; i<=n; i++) {
        if(m[s[i]]==x) {
            m1[s[i]]+=a[i];
            if(x<=m1[s[i]]) {
                cout<<s[i];
                break;
            }
        }
    }
    return 0;
}
