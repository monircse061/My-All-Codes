#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll cont[1000009];
int main() {
    ll n,a[10009],sum=0,t,j=0;
    double x;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);sum=0;
        for(int i=1; i<=n; i++) {
            scanf("%lld",&a[i]);
            cont[a[i]]++;
        }
        for(int i=1; i<=n; i++) {
            if(a[i]!=0&&cont[a[i]]!=0) {

                x=(double)cont[a[i]]/(a[i]+1);

                sum+=(ceil(x)*(a[i]+1));
                if(cont[a[i]]>0) {                    //sum+=cont[a[i]];
                }
                cont[a[i]]=0;
            } else if(cont[a[i]]!=0) {
                sum+=cont[a[i]];
                cont[a[i]]=0;
            }
        }
        j++;
        printf("Case %lld: %lld\n",j,sum);
    }
    return 0;
}
