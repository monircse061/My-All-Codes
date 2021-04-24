#include<bits/stdc++.h>
using namespace std;
int main(){
   long long m,n,i,a,b,c,x1,x2,l=0,k=0,x,x3;
   scanf("%I64d%I64d%I64d%I64d%I64d",&m,&n,&a,&b,&c);
   for(i=1;i<=3;i++){
    if(i==1){
        x=m-(a*2);
    }
    else if(i==2){
        x1=x-b;x2=n-b;
    }
    else if(i==3){
            x3=x2-c*3;


    }
    if(x1<0&&i==2)
        l=abs(x1);
    if(x3<0)
        k=abs(x3);
   }
   printf("%I64d",l+k);
   return 0;
}
