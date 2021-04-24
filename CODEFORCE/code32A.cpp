#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,j,a[1000];
  while(scanf("%I64d",&n)!=EOF){
   j=0;
   for(i=0;i<n;i++){
    scanf("%I64d",&a[i]);
   }
   for(i=0;i<n-2;i++){
    if((a[i+1]<a[i]&&a[i+1]<a[i+2])||(a[i+1]>a[i]&&a[i+1]>a[i+2])){
        j++;
    }
   }
   printf("%I64d\n",j);}
   return 0;
}
