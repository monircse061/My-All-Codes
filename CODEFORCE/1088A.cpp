#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,y,num;double ans;
   scanf("%d",&x);
  for(int i=(x/2)+1;i>=1;i--)
   for(int j=1;;j++){
       num=i*j;
       if(num>x){break;}
      ans=(double)(num/i);
      //cout<<ans;
    if(num*i>x&&ans<x&&num%i==0){
        printf("%d %d",num,i);
        return 0;
    }

   }
   printf("-1");
   return 0;
}
