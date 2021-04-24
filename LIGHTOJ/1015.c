#include<stdio.h>
int main(){
   long long a[10000],sum;int i,test,n,j=0;
   scanf("%d",&test);
   while(test--){
        sum=0;
        scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    j++;
   printf("Case %d: %lld\n",j,sum);
   }
   return 0;
}
