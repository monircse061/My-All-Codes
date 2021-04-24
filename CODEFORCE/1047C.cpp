#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int ck=0,ar[2*10000009],in[3*100009],prime[15000009],res,div1[2*10000009];//

void scieve(int n) {
    int l=2;
    prime[1]=2;
    for(int i=3; i*i<=n+1; i+=2) {
        if(ar[i]==0) {
            //cout<<i<<" ";
            prime[l]=i;
            l++;
            for(int j=i*i; j<=n+1; j+=i*2) {
                ar[j]=1;
            }
        }
    }
    // cout<<prime[l-1];
}
void divisor(int n) {
    for(int i=1; prime[i]*prime[i]<=n; i++) {
        if(n%prime[i]==0) {
            ck=1;
            div1[prime[i]]++;
            res=max(res,div1[prime[i]]);
        }
        while(n%prime[i]==0) {
            n/=prime[i];
        }
    }
    if(n>1) {
        div1[n]++;
        res=max(res,div1[n]);
        ck=1;
    }
}
int main() {
    scieve(15099999);
    int n,gc;
    res=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%d",&in[i]);
    }
    gc=in[1];
    for(int i=2; i<=n; i++) {
        gc=__gcd(gc,in[i]);
    }
    for(int i=1; i<=n; i++) {
        in[i]/=gc;
    }
    for(int i=1; i<=n; i++) {
        divisor(in[i]);
    }
    if(ck==1) {
        printf("%d",n-res);
    } else {
        printf("-1");
    }
    return 0;
}
