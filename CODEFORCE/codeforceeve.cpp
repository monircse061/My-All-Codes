#include<bits/stdc++.h>
using namespace std;
int main(){
   long long i,j,k,m,n,x,y=1,z;
      scanf("%I64d%I64d",&m,&n);
      if(n==1){
        printf("%I64d",m);}
        else
        {while(1){
            y=y*2;
            if(y>m){
                printf("%I64d",y-1);
                break;
            }
        }
      }
   return 0;
}
