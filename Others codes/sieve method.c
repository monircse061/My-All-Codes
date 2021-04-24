#include<stdio.h>
#include<math.h>
#define val 100000000
int a[val];
int main(){
 long long i,j,k,n;
 scanf("%lld",&n);
 k=sqrt(n+1);
 for(i=2;i<=k;i++){
    if(a[i]==0){
    for(j=i;i*j<=n;j++)
        a[i*j]=1;
    }
 }
 for(i=2;i<=n;i++){
    if(a[i]==0){
        printf("%lld ",i);
    }
 }
 return 0;
}
