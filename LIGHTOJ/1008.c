#include<stdio.h>
#include<math.h>
int main(){
   int n,root,diff,r,c;
   while(scanf("%d",&n)!=EOF){
   root=sqrt(n);
   diff=n-root*root;
   if(diff==0){
    if(root%2==0){
        r=1;c=root;
    }
    else{
        c=1;r=root;
    }
   }
   else if(diff>root){
    if(root%2==0){
        r=(root+1)-(diff-root-1);
        c=root+1;
    }
    else{
        c=(root+1)-(diff-root-1);
        r=root+1;
    }
   }
   else{
    if(root%2==0){
        c=root+1;
        r=n-root*root;
    }
    else{
        c=n-root*root;
        r=root+1;
    }
   }
   printf("%d %d\n",c,r);}
   return 0;
}
