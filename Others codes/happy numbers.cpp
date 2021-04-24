#include<bits/stdc++.h>
using namespace std;
#define val 100000
int main(){
   long long n,i,j,s,m,a[val],y,x,b;
   while(scanf("%lld",&n)!=EOF){
    s=0;j=0;y=n;b=1;
    while(n>0){
        m=n%10;
        n=n/10;
        x=m*m;
        s=s+x;
        if(n==0){
            a[j]=s;
        for(i=0,j>0;i<j;i++){
            if(s==a[i]){
                {printf("-1\n");
                b=0;
                }
            }
        }
        if(s==1){
                printf("1\n");
                break;
            }
            else if(b==0){
                break;
            }
          if(s!=1){
                n=s;
                s=0;
            }
            j++;
        }
    }
   }
}
