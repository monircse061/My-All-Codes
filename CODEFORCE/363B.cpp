#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll n,m,a[200009],x=LONG_MAX,index;
   scanf("%I64d %I64d",&n,&m);
   for(int i=1;i<=n;i++){
    scanf("%I64d",&a[i]);
    a[i]+=a[i-1];
   }
   ll j=1,i=m;
   while(j<=i&&i<=n){
       if(x>a[i]-a[j-1]){
        x=a[i]-a[j-1];
        index=j;
       }
       j++,i++;
   }
   printf("%I64d",index);
   return 0;
}
