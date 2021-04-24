#include<bits/stdc++.h>
using namespace std;
int a[10009];
int main() {
    int n,k,sum,ans,t;
    scanf("%d",&t);
    while(t--) {
        ans=INT_MAX;
        a[0]=0;
        scanf("%d %d",&n,&k);
        for(int i=1; i<=k; i++) {
            scanf("%d",&a[i]);
            if(a[i]!=-1) {
                if(k%i==0&&k/i<=n)
                {ans=min(ans,(k/i)*a[i]);}
                else if(k/i<=n){
                    sum=k/i+k%i;
                    if(sum<=n&&a[k%i]!=-1&&k%i<=k){
                        ans=min(ans,(k/i)*a[i]+a[k%i]);
                    }
                }
            }
        }//cout<<ans;
        /**for(int i=0,j=k; i<j; i++,j--) {
            if(a[i]!=-1&&a[j]!=-1)
                ans=min(ans,a[i]+a[j]);
        }**/
        if(ans==INT_MAX) {
            printf("-1\n");
        } else {
            printf("%d\n",ans);
        }
    }
    return 0;
}
