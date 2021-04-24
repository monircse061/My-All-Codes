#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,sum;
   scanf("%d %d %d",&a,&b,&c);
   if(a!=1&&b!=1&&c!=1){
    sum=a*b*c;
   }
   else if(a==1&&b==1&&c==1||a==1&&c==1){
    sum=a+b+c;
   }
   else if(a==1&&b!=1&&c!=1){
    sum=(a+b)*c;
   }
   else if(c==1&&b!=1&&a!=1){
    sum=a*(b+c);
   }
   else{
        if(a>c){
           sum=a*(b+c);
        }
        else{
            sum=(a+b)*c;
        }
   }
   printf("%d",sum);
   return 0;
}
