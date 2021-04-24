#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000009],b[1000009],c[1000009],cont=0,tree[1000009],cont1;
void init(int node,int L,int R) {
    if(L==R) {
        tree[node]=a[L];
        cont=0;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(L+R)/2;
    init(left,L,mid);
    init(right,mid+1,R);
    cont++;
    //cout<<cont<<" ";
    if(cont%2!=0) {
        tree[node]=tree[left]|tree[right];
    } else {
        tree[node]=tree[left]^tree[right];
    }

}
void update(int node,int L,int R,int pos,int value) {
    if(pos<L||pos>R) {
        return;
    }
    if(L==R) {
        tree[node]=value;
        cont1=0;
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(L+R)/2;
    update(left,L,mid,pos,value);
    update(right,mid+1,R,pos,value);
    cont1++;
    if(cont1%2!=0) {
        tree[node]=tree[left]|tree[right];
    } else {
        tree[node]=tree[left]^tree[right];
    }
    //cout<<node<<" "<<tree[node]<<endl;
}
int main() {
    ll n,m,x,y,z;
    scanf("%I64d %I64d",&n,&m);
    for(int i=1; i<=pow(2,n); i++) {
        scanf("%I64d",&a[i]);
    }
    for(int i=1; i<=m; i++) {
        scanf("%I64d %I64d",&b[i],&c[i]);
    }
        init(1,1,pow(2,n));
        for(int i=1; i<=m; i++) {
            update(1,1,pow(2,n),b[i],c[i]);
            printf("%I64d\n",tree[1]);
        }
   // }
    return 0;
}
