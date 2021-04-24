#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll n,x ,y,f1,f2,f,s1,s2,s;
   scanf("%I64d %I64d %I64d",&n,&x,&y);
   f1=abs(1-x),f2=abs(1-y);
   f=max(f1,f2);
   s1=abs(n-x),s2=abs(n-y);
   s=max(s1,s2);
   //res1=f/2;
   //res2=s/2;
   if(s==0&&f==1){
    printf("Black\n");
   }
   else if(f==0&&s==1){
    printf("White\n");
   }
   else if(f>s){
    printf("Black\n");
   }
   else if(s>f){
    printf("White\n");
   }
   else{
    printf("White\n");
   }
   return 0;
}
