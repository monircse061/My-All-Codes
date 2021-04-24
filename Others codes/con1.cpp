#include<bits/stdc++.h>
using namespace std;
#define val 100000
int main(){
   long long a,b,i,j,n,m,x;long long int s[val];
   while(scanf("%lld%lld",&a,&b)!=EOF){
    i=0;x=0;
    while(a>0||b>0){
        n=a%10;
        a=a/10;
        m=b%10;
        b=b/10;
        if(n>m)
            s[i]=n-m;
        else
            s[i]=m-n;
        i++;
    }
     while(s[i-1]==0){
            i--;
           if(s[i]!=0)
                {  i++;
                    break;}
        }
    for(j=i-1;j>=0;j--){
        x=1;
        printf("%lld",s[j]);
    }
    if(x==0){
        printf("0");
    }
    printf("\n");
   }
   return 0;
}
