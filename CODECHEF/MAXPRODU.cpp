#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main(){
   int n,k,ck,num,x,k1,y=1;
   scanf("%d %d",&n,&k);
   ck=(k*(k+1))/2;
   if(ck>n){
    printf("-1");
   }
   else{
    if(ck<=n){
          k1=k+1;
    ck=((k1*(k1+1))/2)-1;
        if(ck>n){
            printf("0");
            y=0;
        }
    }
    if(y==1){
         //x=(n/k)+(n%k)+(k-3);
         //cout<<x<<" ";
         //n-=x;
         for(int i=k;i>=1;i--){
             num=n/i;
            if(n%i!=0){
               x=num+n%i;
                if(i==k){x+=(i-3);}
               //if(i>2&&n%i==1){x++;}
            }
            else{
        if(i==k&&i>3){x=num;x+=(i-3);n-=x;cout<<x<<" ";
        continue;}
                x=num+(i/2);

            }
            if(m[x]==1){
                //x++;
            }
            m[x]++;
            cout<<x<<" ";
            n-=x;
         }
    }
   }
   main();
}
/**#include"bits/stdc++.h"
using namespace std;
//#define ll long long int



#define ll long long

 ll  mod=(ll)1e9+7;

 const int N=2e5+5;
 ll a[N],b[N],n,k;

int done() {
    //cout<<N;
    scanf("%lld%d",&n,&k);
    if(n < (k * (k + 1)) / 2) return printf("-1\n");
    for(int i=1; i<=k; ++i) {
        a[i]=k-i+1;
    }
    n-=(k * (k + 1)) / 2;
    b[1]+=n/k;
    n%=k;
    if(n>0) b[1]++, b[n+1]--;
    ll ans=1;

    for(int i=1; i<=k; ++i) {
    	b[i]+=b[i-1];
    	//cout<<b[i]<<" ";
    	ll x=(ll)(a[i]+b[i]);
       ans = (ans * x * (x-1)) % mod;
    }
    for(int i=1; i<=k; ++i) {
       a[i]=b[i]=0;
    }
    printf("%lld\n", ans);

    return 0;
}

int main() {
    int t, tc=0;
    scanf("%d",&t);
    while(t--) {

        done();
    }

    return 0;
}**/
