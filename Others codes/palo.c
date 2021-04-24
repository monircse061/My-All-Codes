#include<stdio.h>
#include<string.h>
int main(){
   int i,j,n,p;
   while(scanf("%d",&n)!=EOF)
   {i=n;p=0;
   while(n>0){
    p=p*10+n%10;
    n=n/10;
   }
   if(i==p)
    printf("Yes\n");
   else
    printf("No\n");}
   return 0;


}
