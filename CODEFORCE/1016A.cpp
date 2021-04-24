#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll a[2*100009],n,m,j=0,num;
   scanf("%I64d %I64d",&n,&m);
   for(int i=1;i<=n;i++){
    scanf("%I64d",&a[i]);
   }
   for(int i=2;i<=n;i++){
    a[i]+=a[i-1];
   }
   for(int i=1;i<=n;i++){
        num=(a[i]/m)-j;

        printf("%I64d ",num);
         j+=num;
   }
   return 0;
}
