#include<bits/stdc++.h>
using namespace std;
int main() {
    int ar[109];
    int n,x=-1,sum1=0,sum;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%d",&ar[i]);
        sum1+=ar[i];
        if(x<ar[i]) {
            x=ar[i];
        }
    }
    for(int i=x; ;i++) {
        sum=0;
        for(int j=1; j<=n; j++) {
            sum+=(i-ar[j]);
        }
        if(sum>sum1) {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
