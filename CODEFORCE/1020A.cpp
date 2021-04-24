#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll n,h,a,b,k,t1,f1,t2,f2,t,tt,ans,sum,sum1,sum2;
   scanf("%I64d %I64d %I64d %I64d %I64d",&n,&h,&a,&b,&k);
   while(k--){
        sum=0;
   scanf("%I64d %I64d %I64d %I64d",&t1,&f1,&t2,&f2);
   if(t1==t2){
    ans=abs(f1-f2);
   }
   else{
    if(f1>=a&&f1<=b||f2>=a&&f2<=b){
        sum=abs(t2-t1);
        sum+=abs(f1-f2);
        ans=sum;
    }
    else{
            if(f1>b){
                sum1=abs(f1-b);
                t=b;
            }
            else{
                sum1=abs(f1-a);
                t=a;
            }
            if(f2>b){
                sum2=abs(f2-b);
                tt=b;
            }
            else{
                sum2=abs(f2-a);
                tt=a;
            }

        if(sum1<sum2){
            sum+=sum1+abs(t1-t2)+abs(f2-t);

        }
        else{
            sum+=sum2+abs(t1-t2)+abs(f1-tt);
        }
        ans=sum;
    }
   }
   printf("%I64d\n",ans);}
   return 0;
}
