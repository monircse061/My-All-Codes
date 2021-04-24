#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000009],cont[1000009];
int main(){
    ll n,x=-1,ans=0,z=-1,y;
    scanf("%I64d",&n);
    for(int i=1;i<=n;i++){
        scanf("%I64d",&y);
        cont[y]++;
        if(x<y){
            x=y;
        }
    }
    a[0]=0;
    a[1]=cont[1];
    for(int i=2;i<=x;i++){
        a[i]=max(i*cont[i]+a[i-2],a[i-1]);
        if(z<a[i]){
            z=a[i];
        }
    }
    ans=max(z,a[1]);
    printf("%I64d",ans);
    return 0;
}
