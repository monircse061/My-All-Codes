#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define val 100000
int main(){
   int i,j,a[val],x=1,n;
   scanf("%d",&n);
   a[0]=6;a[1]=28;a[2]=120;a[3]=496;a[4]=2016;a[5]=8128;a[6]=32640;
   for(i=0;i<7;i++){
    if(n%a[i]==0){
       x=0;j=i;
    }
   }
   if(x==1){
    printf("1\n");
   }
   else
   {printf("%d\n",a[j]);}
   return 0;
}
