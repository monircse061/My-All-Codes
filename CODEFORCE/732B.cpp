#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m,a[100009],d,sum=0;
   scanf("%d %d",&n,&m);
   for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
   }int j=1,i=2;
   while(j<i&&i<=n){
    if(a[j]+a[i]<m){
        d=m-(a[j]+a[i]);
        a[i]+=d;
        sum+=d;
    }
    i++,j++;
   }
   printf("%d\n",sum);
   for(int i=1;i<=n;i++){
    printf("%d ",a[i]);
   }
   return 0;
}
