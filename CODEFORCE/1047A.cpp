#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,num,a,b,c;
   scanf("%d",&n);
   num=n/3;
   //num1=num;
 if(num%3!=0&&n%3==0){
    printf("%d %d %d",num,num,num);
   }
   else{
    a=1,b=2,c=n-(a+b);
    if(c%3==0){
        b-=1;
        c+=1;
    }
     printf("%d %d %d",a,b,c);
   }
   return 0;
}
