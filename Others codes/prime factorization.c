#include<stdio.h>
#define val 10000
/*****int a[val],b[val],i,j,m,n,k,c[val];
void prime(){
    for(i=2;i<=100;i+=2){
        if(a[i]==0){
            for(j=2;i*j<=100;j++)
            a[i*j]=1;
        }
    }k=0;
    for(i=2;i<=100;i++){
        if(a[i]==0){
            b[k]=i;
            k++;
        }
    }
}
int main(){
    prime();
   int i,j=0,n,a;
   scanf("%d",&n);
   for(i=0;i<k;i++){
    while(n%b[i]==0&&n>1){
        m=n/b[i];
       c[j]=b[i];
       j++;
        n=m;
    }
   }
   for(a=0;a<j;a++){
     printf("%d ",c[a]);
   }
   return 0;
}
****************************************************/
for (int i = 2; i * i <= n; ++i) {
    if (minPrime[i] == 0) {         //If i is prime
        for (int j = i * i; j <= n; j += i) {
            if (minPrime[j] == 0) {
                minPrime[j] = i;
            }
        }
    }
}
for (int i = 2; i <= n; ++i) {
    if (minPrime[i] == 0) {
        minPrime[i] = i;
    }
}


vector<int> factorize(int n) {
    vector<int> res;
    while (n != 1) {
        res.push_back(minPrime[n]);
        n /= minPrime[n];
    }
    return res;
}









