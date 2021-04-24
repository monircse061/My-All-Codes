#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,a[10000],cont=0,x;
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++){
    if(a[i]>k){
        x=i;
        break;
    }
    cont++;
   }
   for(int i=n-1;i>x;i--ss){
    if(a[i]>k){
        break;
    }
    cont++;
   }
   printf("%d",cont);
   return 0;
}
