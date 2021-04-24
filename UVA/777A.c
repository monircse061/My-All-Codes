#include<stdio.h>
int main(){
  int i,j,a,n;
  while(scanf("%d%d",&n,&a)!=EOF){
 for(i=1,j=a;i<=n&&j>=0;){


        if(j!=0&&i<=n){
           j--;i++;}
            ///continue;
            while(j==0&&i<=n&&j!=2){
                j++;i++;

            }

    ///j=2;*/
 }
 printf("%d\n%d",j,i);}
  return 0;
}
