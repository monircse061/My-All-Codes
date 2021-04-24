#include<bits/stdc++.h>
using namespace std;
long long int a[10009];
int main(){
   long long int n,x,y,i1,i2,s=0,c;
   scanf("%lld",&n);
   for(int i=0;i<n;i++){
    scanf("%lld",&a[i]);

   }
  sort(a,a+n);
   for(int i=0;i<n-1;i++){

    s=s+a[i]*a[i+1];
   }
   cout<<s;
   return 0;
}
