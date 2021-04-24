#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int a[1000009],b[1000009];
int main(){
    ll n,x=-1,num;
    scanf("%I64d",&n);
    for(int i=1;i<=n;i++){
        scanf("%I64d %I64d",&a[i],&b[i]);
        num=a[i]+b[i];
        if(x<num){
            x=num;
        }
    }
    printf("%I64d",x);
    return 0;
}
