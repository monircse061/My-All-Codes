#include<bits/stdc++.h>
using namespace std;
int main(){
   long long a[1000],i,j=0,n,s=0,x;

   for(i=0;i<6;i++){
    scanf("%I64d",&a[i]);
    s=s+a[i];
   }

   if(s%2==0)

   {n=s/2;
   s=0;
   for(i=0;i<6;i++){
    s=s+a[i];
    j++;
    if(s<n){
        continue;
    }
    else if(s>n){
        j--;
        x=s-a[i];
        s=x;
    }
    else if(j==3){
        break;
    }
   }}
   if(j==3)
   {printf("YES\n");}
   else
   {printf("NO\n");}
   return 0;
}
