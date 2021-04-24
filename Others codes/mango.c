#include<stdio.h>
 int a[10000],j,k,n,b[10000],i;
   void mango(){
   for(i=1;i<n;i++){
        a[i]=a[i-1]+a[i];}
    }

  int main(){

      scanf("%d",&n);
      for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
      mango();
     while(scanf("%d",&k)==1){
        j=0;
     for(i=0;i<n;i++){
        j++;
        if(k<=a[i])
        {printf("%d\n",j);
        break;}
     }
  }
  }
