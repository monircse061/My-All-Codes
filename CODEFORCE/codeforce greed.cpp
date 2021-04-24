#include<bits/stdc++.h>
using namespace std;
#define val 100000000
int a[val],b[val];
int main(){
   long long n,i,j,k=0,l,s=0;
   scanf("%I64d",&n);
   for(i=0;i<n;i++){
    scanf("%I64d",&a[i]);
    s=s+a[i];
   }
   for(i=0;i<n;i++){
    scanf("%I64d",&b[i]);
   }
   sort(b,b+n);
   l=b[n-1]+b[n-2];

   if(l>=s){
            printf("YES\n");
        }
    else
            printf("NO\n");
   return 0;
}
