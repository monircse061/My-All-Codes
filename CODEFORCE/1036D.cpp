#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[3*100009],b[3*100009],x=1,len=0;
int main() {
    ll n,m,sum1=0,sum2=0;
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%I64d",&a[i]);
    }
    scanf("%I64d",&m);
    for(int i=1; i<=m; i++) {
        scanf("%I64d",&b[i]);
    }
    ll i=1,j=1;
    while(i<=n||j<=m) {
        if(a[i]==b[j]&&sum1==sum2&&a[i]!=0&&b[j]!=0) {
            i++,j++;
            x=1;
            len++;
            continue;
        } else {
            if(sum1<sum2&&a[i]!=0) {
                sum1+=a[i];
                i++;
                x=0;
            } else if(sum2<sum1&&b[j]!=0) {
                sum2+=b[j];
                j++;
                x=0;
            } else {
                sum1+=a[i];

                sum2+=b[j];
                i++,j++;
                x=0;
            }
            if(sum1==sum2) {
                len++;
                sum1=0,sum2=0;
                x=1;
            }
        }
    }
    if(x==0) {
        printf("-1");
    } else {
        printf("%I64d",len);
    }
    return 0;
}
